#include <ESP8266HTTPClient.h>
#include <ESP8266WiFi.h>
#include <ArduinoJson.h>
#include <U8g2lib.h>
#include <WiFiUdp.h>
#include <TimeLib.h>
#include <Ticker.h>
#include <DHT.h>
#include "icon.h"

/************************ 引脚连线 ****************************/
//ESP8266          D3       D4        D5                     //
//SSD1306         SDA      SCL                               //
//DHT11                              DATA                    //
                                                             //
/************************** 配置 ******************************/
// 程序使用知心天气的API接口，需要去知心天气注册账号获取到APIkey      //
// 地址https://www.seniverse.com                               //
const char SSID[]      = "******";           // wifi ssid     //
const char PASSWORD[]  = "******";           // wifi 密码      //
const char APIKEY[]    = "******";           // API密钥        //
const char CITY[]      = "fuzhou";           // 城市           //
//                                                            //
/**************************************************************/

/************************* 下面为代码 ***************************/
              // 如果看不懂的话不要随意修改下面数据 //
static const char ntpServerName[] = "cn.ntp.org.cn";
boolean httpUpdate = true;
String city_name; 
String last_update;
struct WeatherData {
  String text_day;
  byte code_day;
  String text_night;
  byte code_night;
  byte high_temp;
  byte low_temp;
  byte wind_scale;
}day0Data, day1Data, day2Data;
DHT dht(D5, DHT11);
Ticker flipper;
HTTPClient http;
WiFiUDP Udp;
U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2(U8G2_R0, D4, D3, U8X8_PIN_NONE);
 
void setup() {
  u8g2.begin();
  u8g2.setFontPosTop();
  u8g2.setFontDirection(0);
  u8g2.drawXBMP(0, 16, 128,32, mianlogo);
  u8g2.sendBuffer();
  WiFi.mode(WIFI_STA);
  Serial.begin(115200);
  Serial.print("Connecting to ");
  Serial.println(SSID);
  WiFi.begin(SSID, PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
  flipper.attach(300, flip);
  String GetUrl;
  GetUrl  = "http://api.seniverse.com/v3/weather/daily.json?key=";
  GetUrl += APIKEY;
  GetUrl += "&location=";
  GetUrl += CITY;
  GetUrl += "&language=zh-Hans&unit=c&start=0&days=3";
  http.setTimeout(2000);
  http.begin(GetUrl);
  http.setUserAgent("esp8266");
  http.setAuthorization("esp8266","prqiu");
  Udp.begin(8888);
  dht.begin();
  setSyncProvider(getNtpTime);
  setSyncInterval(300);
}
 
void loop() {
  static long lasttime = 0;
  static byte i = 0;
  if(!(lasttime == (millis()/1000))){
    lasttime = (millis()/1000);
    if(i/5 == 0){
      page1();
    }
    else if(i / 5 == 1){
      page2();
    }
    else if(i / 5 == 2){
      page3();
    }
    i++;
    if(i==15){
      i=0;
    }
  }
  if(httpUpdate){
    String response;
    int httpCode = http.GET();
    if (httpCode > 0) {
      Serial.printf("[HTTP] GET... code: %d\n", httpCode);
      if (httpCode == HTTP_CODE_OK) {
        response = http.getString();
        Serial.println("Get the data from Internet!");
        if(parseData(response)){
          printUserData();
        }
      }
    } 
    else {
      Serial.printf("[HTTP] GET... failed, error: %s\n", http.errorToString(httpCode).c_str());
    }
    http.end();
    httpUpdate = false;
  }
}

void page1(){
  u8g2.firstPage();
  do {
    printIcon(15, 12, day0Data.code_day);
    u8g2.drawXBMP(115, 10, 8, 16, celicon);
    u8g2.drawXBMP(115, 30, 8, 16, celicon);
    u8g2.drawXBMP(60, 54, 22, 10, Page1);
    u8g2.setFont(u8g2_font_t0_12_mf);
    u8g2.setCursor(60,12);
    u8g2.print("High");
    u8g2.setCursor(60,32);
    u8g2.print("Low");
    u8g2.setFont(u8g2_font_crox3hb_tr);
    u8g2.setCursor(90,10);
    u8g2.print(day0Data.high_temp);
    u8g2.setCursor(90,30);
    u8g2.print(day0Data.low_temp);
    u8g2.setFont(u8g2_font_t0_12_mf);
    u8g2.setCursor(2,53);
    u8g2.print(nowTime());
  } while ( u8g2.nextPage() );
}

void page2(){
  u8g2.firstPage();
  do {
    printIcon(9, 2, day0Data.code_day);
    printIcon(49, 2, day1Data.code_day);
    printIcon(89, 2, day2Data.code_day);
    u8g2.drawXBMP(60, 54, 22, 10, Page2);
    u8g2.setFont(u8g2_font_t0_12_mf);
    u8g2.setCursor(11,32);
    u8g2.print("H ");
    u8g2.print(day0Data.high_temp);
    u8g2.setCursor(11,42);
    u8g2.print("L ");
    u8g2.print(day0Data.low_temp);
    u8g2.setCursor(51,32);
    u8g2.print("H ");
    u8g2.print(day0Data.high_temp);
    u8g2.setCursor(51,42);
    u8g2.print("L ");
    u8g2.print(day0Data.low_temp);
    u8g2.setCursor(91,32);
    u8g2.print("H ");
    u8g2.print(day0Data.high_temp);
    u8g2.setCursor(91,42);
    u8g2.print("L ");
    u8g2.print(day0Data.low_temp);
    u8g2.setFont(u8g2_font_t0_12_mf);
    u8g2.setCursor(2,53);
    u8g2.print(nowTime());
  } while ( u8g2.nextPage() );
}

void page3(){
  u8g2.firstPage();
  do {
    printIcon(15, 5, 100);
    u8g2.drawXBMP(60, 10, 16, 16, tempicon);
    u8g2.drawXBMP(60, 30, 16, 16, humiicon);
    u8g2.drawXBMP(115, 10, 8, 16, celicon);
    u8g2.drawXBMP(115, 30, 8, 16, pericon);
    u8g2.drawXBMP(60, 54, 22, 10, Page3);
    u8g2.setFont(u8g2_font_t0_12_mf);
    u8g2.setCursor(12,35);
    u8g2.print("indoor");
    u8g2.setFont(u8g2_font_crox3hb_tr);
    u8g2.setCursor(77,10);
    u8g2.print(dht.readTemperature(),1);
    u8g2.setCursor(77,30);
    u8g2.print(dht.readHumidity(),1);
    u8g2.setFont(u8g2_font_t0_12_mf);
    u8g2.setCursor(2,53);
    u8g2.print(nowTime());
  } while ( u8g2.nextPage() );
}

void flip(){
  httpUpdate = true;
}

/********************************** 数据解析 **********************************/

String nowDate(){
  int years;
  byte months, days;
  String Date= "";
  years = year();
  months = month();
  days = day();
  Date += years;
  Date += "/";
  if (months < 10)
    Date += 0;
  Date += months;
  Date += "/";
  if (days < 10)
    Date += 0;
  Date += days;
  return Date;
}

String nowTime(){
  byte hours, minutes, seconds;
  String Time = "";
  hours = hour();
  minutes = minute();
  seconds = second();
  if (hours < 10)
    Time += 0;
  Time += hours;
  Time += ":";
  if (minutes < 10)
    Time += 0;
  Time += minutes;
  Time += ":";
  if (seconds < 10)
    Time += 0;
  Time += seconds;
  return Time;
}

bool parseData(String response) {
  DynamicJsonDocument doc(2048);
  DeserializationError error = deserializeJson(doc, response);
  if (!error) {
    const char* name         = doc["results"][0]["location"]["name"];
    const char* text_day_0   = doc["results"][0]["daily"][0]["text_day"];
    const char* code_day_0   = doc["results"][0]["daily"][0]["code_day"];
    const char* text_night_0 = doc["results"][0]["daily"][0]["text_night"];
    const char* code_night_0 = doc["results"][0]["daily"][0]["code_night"];
    const char* high_0       = doc["results"][0]["daily"][0]["high"];
    const char* low_0        = doc["results"][0]["daily"][0]["low"];
    const char* wind_scale_0 = doc["results"][0]["daily"][0]["wind_scale"];
    const char* text_day_1   = doc["results"][0]["daily"][1]["text_day"];
    const char* code_day_1   = doc["results"][0]["daily"][1]["code_day"];
    const char* text_night_1 = doc["results"][0]["daily"][1]["text_night"];
    const char* code_night_1 = doc["results"][0]["daily"][1]["code_night"];
    const char* high_1       = doc["results"][0]["daily"][1]["high"];
    const char* low_1        = doc["results"][0]["daily"][1]["low"];
    const char* wind_scale_1 = doc["results"][0]["daily"][1]["wind_scale"];
    const char* text_day_2   = doc["results"][0]["daily"][2]["text_day"];
    const char* code_day_2   = doc["results"][0]["daily"][2]["code_day"];
    const char* text_night_2 = doc["results"][0]["daily"][2]["text_night"];
    const char* code_night_2 = doc["results"][0]["daily"][2]["code_night"];
    const char* high_2       = doc["results"][0]["daily"][2]["high"];
    const char* low_2        = doc["results"][0]["daily"][2]["low"];
    const char* wind_scale_2 = doc["results"][0]["daily"][2]["wind_scale"];
    const char* udate        = doc["results"][0]["last_update"];

    city_name = name;
    day0Data.text_day   = text_day_0;
    day0Data.code_day   = atoi(code_day_0);
    day0Data.text_night = text_night_0;
    day0Data.code_night = atoi(code_night_0);
    day0Data.high_temp  = atoi(high_0);
    day0Data.low_temp   = atoi(low_0);
    day0Data.wind_scale = atoi(wind_scale_0);
    day1Data.text_day   = text_day_1;
    day1Data.code_day   = atoi(code_day_1);
    day1Data.text_night = text_night_1;
    day1Data.code_night = atoi(code_night_1);
    day1Data.high_temp  = atoi(high_1);
    day1Data.low_temp   = atoi(low_1);
    day1Data.wind_scale = atoi(wind_scale_1);
    day2Data.text_day   = text_day_2;
    day2Data.code_day   = atoi(code_day_2);
    day2Data.text_night = text_night_2;
    day2Data.code_night = atoi(code_night_2);
    day2Data.high_temp  = atoi(high_2);
    day2Data.low_temp   = atoi(low_2);
    day2Data.wind_scale = atoi(wind_scale_2);
    last_update         = udate;
    return true;
  }
  Serial.print(F("parse data failed: "));
  Serial.println(error.c_str());
  return false;
}
 
void printUserData() {
  Serial.println();
  Serial.println(city_name);
  Serial.println(day0Data.text_day);
  Serial.println(day0Data.code_day);
  Serial.println(day0Data.text_night);
  Serial.println(day0Data.code_night);
  Serial.println(day0Data.high_temp);
  Serial.println(day0Data.low_temp);
  Serial.println(day0Data.wind_scale);
  Serial.println(last_update);
}

void printIcon(byte x, byte y, byte code){
  switch (code){
    case 0:
      u8g2.drawXBMP(x, y, 30, 30, Sunny);
      break;
    case 1:
      u8g2.drawXBMP(x, y, 30, 30, Clear);
      break;
    case 4:
      u8g2.drawXBMP(x, y, 30, 30, Cloudy);
      break;
    case 9:
      u8g2.drawXBMP(x, y, 30, 30, Overcast);
     break;
    case 10:
      u8g2.drawXBMP(x, y, 30, 30, Shower);
      break;
    case 11:
      u8g2.drawXBMP(x, y, 30, 30, Thunder);
      break;
    case 13:
      u8g2.drawXBMP(x, y, 30, 30, LightRain);
      break;
    case 14:
      u8g2.drawXBMP(x, y, 30, 30, ModerateRain);
      break;
    case 15:
      u8g2.drawXBMP(x, y, 30, 30, HeavyRain);
      break;
    case 16:
      u8g2.drawXBMP(x, y, 30, 30, Storm);
      break;
    case 30:
      u8g2.drawXBMP(x, y, 30, 30, Foggy);
      break;
    case 31:
      u8g2.drawXBMP(x, y, 30, 30, Haze);
      break;
    case 32:
      u8g2.drawXBMP(x, y, 30, 30, Windy);
      break;
    case 99:
      u8g2.drawXBMP(x, y, 30, 30, Unknown);
      break;
    case 100:
      u8g2.drawXBMP(x, y, 30, 30, Home);
      break;
  }
}

/*-------- NTP code ----------*/

const int NTP_PACKET_SIZE = 48; // NTP time is in the first 48 bytes of message
byte packetBuffer[NTP_PACKET_SIZE]; //buffer to hold incoming & outgoing packets

time_t getNtpTime()
{
  IPAddress ntpServerIP; // NTP server's ip address

  while (Udp.parsePacket() > 0) ; // discard any previously received packets
  // get a random server from the pool
  WiFi.hostByName(ntpServerName, ntpServerIP);
  sendNTPpacket(ntpServerIP);
  uint32_t beginWait = millis();
  while (millis() - beginWait < 1500) {
    int size = Udp.parsePacket();
    if (size >= NTP_PACKET_SIZE) {
      Serial.println("Receive NTP Response");
      Udp.read(packetBuffer, NTP_PACKET_SIZE);  // read packet into the buffer
      unsigned long secsSince1900;
      // convert four bytes starting at location 40 to a long integer
      secsSince1900 =  (unsigned long)packetBuffer[40] << 24;
      secsSince1900 |= (unsigned long)packetBuffer[41] << 16;
      secsSince1900 |= (unsigned long)packetBuffer[42] << 8;
      secsSince1900 |= (unsigned long)packetBuffer[43];
      return secsSince1900 - 2208988800UL + 8 * SECS_PER_HOUR;
    }
  }
  Serial.println("No NTP Response :-(");
  return 0; // return 0 if unable to get the time
}

// send an NTP request to the time server at the given address
void sendNTPpacket(IPAddress &address)
{
  // set all bytes in the buffer to 0
  memset(packetBuffer, 0, NTP_PACKET_SIZE);
  // Initialize values needed to form NTP request
  // (see URL above for details on the packets)
  packetBuffer[0] = 0b11100011;   // LI, Version, Mode
  packetBuffer[1] = 0;     // Stratum, or type of clock
  packetBuffer[2] = 6;     // Polling Interval
  packetBuffer[3] = 0xEC;  // Peer Clock Precision
  // 8 bytes of zero for Root Delay & Root Dispersion
  packetBuffer[12] = 49;
  packetBuffer[13] = 0x4E;
  packetBuffer[14] = 49;
  packetBuffer[15] = 52;
  // all NTP fields have been given values, now
  // you can send a packet requesting a timestamp:
  Udp.beginPacket(address, 123); //NTP requests are to port 123
  Udp.write(packetBuffer, NTP_PACKET_SIZE);
  Udp.endPacket();
}
