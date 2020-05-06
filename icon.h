const unsigned char Sunny[] PROGMEM ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x07,0x00,
0x00,0xFE,0x1F,0x00,0x80,0xFF,0x7F,0x00,0xC0,0xFF,0xFF,0x00,0xE0,0xFF,0xFF,0x01,
0xE0,0xFF,0xFF,0x01,0xF0,0xFF,0xFF,0x03,0xF0,0xFF,0xFF,0x03,0xF8,0xFF,0xFF,0x07,
0xF8,0xFF,0xFF,0x07,0xF8,0xFF,0xFF,0x07,0xF8,0xFF,0xFF,0x07,0xF8,0xFF,0xFF,0x07,
0xF8,0xFF,0xFF,0x07,0xF8,0xFF,0xFF,0x07,0xF8,0xFF,0xFF,0x07,0xF0,0xFF,0xFF,0x03,
0xF0,0xFF,0xFF,0x03,0xE0,0xFF,0xFF,0x01,0xE0,0xFF,0xFF,0x01,0xC0,0xFF,0xFF,0x00,
0x80,0xFF,0x7F,0x00,0x00,0xFE,0x1F,0x00,0x00,0xF8,0x07,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
const unsigned char Clear[] PROGMEM ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x00,
0x00,0x1E,0x00,0x00,0x80,0x1F,0x00,0x00,0xC0,0x0F,0x00,0x00,0xE0,0x0F,0x00,0x00,
0xE0,0x0F,0x00,0x00,0xF0,0x0F,0x00,0x00,0xF0,0x0F,0x00,0x00,0xF8,0x1F,0x00,0x00,
0xF8,0x1F,0x00,0x00,0xF8,0x1F,0x00,0x00,0xF8,0x3F,0x00,0x00,0xF8,0x7F,0x00,0x00,
0xF8,0xFF,0x00,0x00,0xF8,0xFF,0x07,0x07,0xF0,0xFF,0xFF,0x07,0xF0,0xFF,0xFF,0x03,
0xE0,0xFF,0xFF,0x03,0xE0,0xFF,0xFF,0x01,0xC0,0xFF,0xFF,0x01,0x80,0xFF,0xFF,0x00,
0x00,0xFF,0x7F,0x00,0x00,0xFC,0x1F,0x00,0x00,0xF0,0x07,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
const unsigned char Cloudy[] PROGMEM ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xFC,0x01,0x00,0x00,0xFF,0x07,0x00,0x00,0xFE,0x0F,0x00,0xE0,0xFD,0x0F,
0x00,0xF0,0xFB,0x1F,0xC0,0xF8,0xF7,0x1F,0xE0,0xFD,0xEF,0x1F,0xF0,0xFF,0xEF,0x1F,
0xF0,0xFF,0xDF,0x1F,0xF8,0xFF,0xDF,0x1F,0xF8,0xFF,0x3F,0x1E,0xFC,0xFF,0xFF,0x0D,
0xFE,0xFF,0xFF,0x03,0xFF,0xFF,0xFF,0x07,0xFF,0xFF,0xFF,0x07,0xFF,0xFF,0xFF,0x07,
0xFF,0xFF,0xFF,0x07,0xFF,0xFF,0xFF,0x07,0xFE,0xFF,0xFF,0x03,0xFC,0xFF,0xFF,0x01,
0xF8,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
const unsigned char Overcast[] PROGMEM ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0x0F,0x00,0x00,0xC0,0x3F,0x00,0x80,0xE1,0x7F,0x00,0xE0,0xF3,0xFF,0x00,
0xF0,0xFF,0xFF,0x01,0xF0,0xFF,0xFF,0x01,0xF8,0xFF,0xFF,0x01,0xF8,0xFF,0xFF,0x03,
0xFC,0xFF,0xFF,0x07,0xFE,0xFF,0xFF,0x0F,0xFE,0xFF,0xFF,0x0F,0xFF,0xFF,0xFF,0x1F,
0xFF,0xFF,0xFF,0x1F,0xFF,0xFF,0xFF,0x1F,0xFF,0xFF,0xFF,0x1F,0xFF,0xFF,0xFF,0x1F,
0xFE,0xFF,0xFF,0x0F,0xFC,0xFF,0xFF,0x07,0xF8,0xFF,0xFF,0x03,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
const unsigned char Shower[] PROGMEM ={0x00,0x00,0xF8,0x03,0x00,0x00,0xFE,0x0F,0x00,0x00,0xFE,0x1F,0x00,0xC0,0xF9,0x1F,
0x00,0xF0,0xE7,0x3F,0x80,0xFB,0xDF,0x3F,0xE0,0xFF,0xBF,0x3F,0xF0,0xFF,0xBF,0x3F,
0xF0,0xFF,0x7F,0x3F,0xF8,0xFF,0x7F,0x3F,0xF8,0xFF,0xFF,0x3E,0xFC,0xFF,0xFF,0x3D,
0xFE,0xFF,0xFF,0x1B,0xFE,0xFF,0xFF,0x07,0xFF,0xFF,0xFF,0x07,0xFF,0xFF,0xFF,0x0F,
0xFF,0xFF,0xFF,0x0F,0xFF,0xFF,0xFF,0x0F,0xFF,0xFF,0xFF,0x07,0xFE,0xFF,0xFF,0x07,
0xFE,0xFF,0xFF,0x03,0xF8,0xFF,0xFF,0x01,0x00,0x00,0x00,0x00,0xE0,0x60,0x70,0x00,
0xE0,0x70,0x70,0x00,0xF0,0x70,0x78,0x00,0x70,0x78,0x38,0x00,0x70,0x38,0x3C,0x00,
0x38,0x38,0x1C,0x00,0x38,0x18,0x1C,0x00};
const unsigned char Thunder[] PROGMEM ={0x00,0x00,0x00,0x00,0x00,0xC0,0x3F,0x00,0x00,0xE0,0x7F,0x00,0x80,0xF7,0xFF,0x00,
0xC0,0xFF,0xFF,0x01,0xE0,0xFF,0xFF,0x01,0xF0,0xFF,0xFF,0x01,0xF0,0xFF,0xFF,0x01,
0xF0,0xFF,0xFF,0x03,0xF8,0xFF,0xFF,0x07,0xFC,0xFF,0xFF,0x0F,0xFE,0xFF,0xFF,0x1F,
0xFE,0xFF,0xFF,0x1F,0xFE,0xFF,0xFF,0x1F,0xFE,0xFF,0xFF,0x1F,0xFE,0xFF,0xFF,0x1F,
0xFE,0xFF,0xFF,0x1F,0xFC,0xFF,0xFF,0x0F,0xF8,0xFF,0xFF,0x07,0xF0,0xFF,0xFF,0x01,
0x00,0xF0,0x01,0x00,0xC0,0xF8,0xC1,0x00,0xE0,0xF8,0xE7,0x00,0xE0,0xFC,0xE3,0x00,
0x70,0xFE,0x71,0x00,0x70,0xF0,0x70,0x00,0x30,0x78,0x30,0x00,0x00,0x3C,0x00,0x00,
0x00,0x1E,0x00,0x00,0x00,0x0E,0x00,0x00};
const unsigned char LightRain[] PROGMEM ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x3F,0x00,0x00,0xE0,0x7F,0x00,
0x80,0xF7,0xFF,0x00,0xC0,0xFF,0xFF,0x00,0xE0,0xFF,0xFF,0x01,0xF0,0xFF,0xFF,0x01,
0xF0,0xFF,0xFF,0x01,0xF0,0xFF,0xFF,0x03,0xF8,0xFF,0xFF,0x07,0xFC,0xFF,0xFF,0x0F,
0xFE,0xFF,0xFF,0x1F,0xFE,0xFF,0xFF,0x1F,0xFE,0xFF,0xFF,0x1F,0xFE,0xFF,0xFF,0x1F,
0xFE,0xFF,0xFF,0x1F,0xFE,0xFF,0xFF,0x1F,0xFC,0xFF,0xFF,0x0F,0xF8,0xFF,0xFF,0x07,
0xF0,0xFF,0xFF,0x01,0x00,0x00,0x00,0x00,0xC0,0x40,0x60,0x00,0xC0,0x60,0x70,0x00,
0xE0,0x70,0x70,0x00,0x60,0x70,0x30,0x00,0x70,0x30,0x38,0x00,0x30,0x38,0x1C,0x00,
0x30,0x18,0x1C,0x00,0x00,0x00,0x00,0x00};
const unsigned char ModerateRain[] PROGMEM ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x3F,0x00,0x00,0xE0,0x7F,0x00,
0x80,0xF7,0xFF,0x00,0xC0,0xFF,0xFF,0x01,0xE0,0xFF,0xFF,0x01,0xF0,0xFF,0xFF,0x01,
0xF0,0xFF,0xFF,0x01,0xF0,0xFF,0xFF,0x03,0xF8,0xFF,0xFF,0x07,0xFC,0xFF,0xFF,0x0F,
0xFE,0xFF,0xFF,0x1F,0xFE,0xFF,0xFF,0x1F,0xFE,0xFF,0xFF,0x1F,0xFE,0xFF,0xFF,0x1F,
0xFE,0xFF,0xFF,0x1F,0xFE,0xFF,0xFF,0x1F,0xFC,0xFF,0xFF,0x0F,0xFC,0xFF,0xFF,0x07,
0xF0,0xFF,0xFF,0x03,0x00,0x00,0x00,0x00,0x40,0x18,0x82,0x00,0xE0,0x18,0xC7,0x00,
0xE0,0x1C,0xE7,0x00,0x70,0x8C,0xE3,0x00,0x30,0x8E,0x63,0x00,0x38,0xCE,0x71,0x00,
0x38,0xC6,0x31,0x00,0x00,0x00,0x00,0x00};
const unsigned char HeavyRain[] PROGMEM ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x3F,0x00,0x00,0xE0,0x7F,0x00,
0x80,0xF7,0xFF,0x00,0xC0,0xFF,0xFF,0x01,0xE0,0xFF,0xFF,0x01,0xF0,0xFF,0xFF,0x01,
0xF0,0xFF,0xFF,0x01,0xF0,0xFF,0xFF,0x03,0xF8,0xFF,0xFF,0x07,0xFC,0xFF,0xFF,0x0F,
0xFE,0xFF,0xFF,0x1F,0xFE,0xFF,0xFF,0x1F,0xFE,0xFF,0xFF,0x1F,0xFE,0xFF,0xFF,0x1F,
0xFE,0xFF,0xFF,0x1F,0xFE,0xFF,0xFF,0x1F,0xFC,0xFF,0xFF,0x0F,0xFC,0xFF,0xFF,0x07,
0xF0,0xFF,0xFF,0x03,0x00,0x00,0x00,0x00,0x60,0x84,0x18,0x03,0x60,0xCE,0x98,0x03,
0x70,0xEE,0x9C,0x03,0x30,0xE7,0xCC,0x01,0x38,0x67,0xCE,0x01,0xB8,0x73,0xEE,0x00,
0x98,0x33,0xE6,0x00,0x00,0x00,0x00,0x00};
const unsigned char Storm[] PROGMEM ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x3F,0x00,0x00,0xE0,0x7F,0x00,
0x80,0xF7,0xFF,0x00,0xC0,0xFF,0xFF,0x01,0xE0,0xFF,0xFF,0x01,0xF0,0xFF,0xFF,0x01,
0xF0,0xFF,0xFF,0x01,0xF0,0xFF,0xFF,0x03,0xF8,0xFF,0xFF,0x07,0xFC,0xFF,0xFF,0x0F,
0xFE,0xFF,0xFF,0x1F,0xFE,0xFF,0xFF,0x1F,0xFE,0xFF,0xFF,0x1F,0xFE,0xFF,0xFF,0x1F,
0xFE,0xFF,0xFF,0x1F,0xFE,0xFF,0xFF,0x1F,0xFC,0xFF,0xFF,0x0F,0xFC,0xFF,0xFF,0x07,
0xF0,0xFF,0xFF,0x03,0x00,0x00,0x00,0x00,0x60,0x66,0x32,0x02,0x60,0x37,0x33,0x03,
0x70,0xB3,0xBB,0x03,0x30,0xBB,0x99,0x01,0xB8,0x99,0xDD,0x01,0x98,0xDD,0xCD,0x00,
0xD8,0xCD,0xEC,0x00,0x00,0x00,0x00,0x00};
const unsigned char Foggy[] PROGMEM ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x00,
0xC0,0xFF,0x01,0x00,0xE0,0xFF,0x03,0x00,0xF0,0xFF,0x07,0x00,0xF8,0xFF,0x0F,0x00,
0xF8,0xFF,0xFF,0x00,0xFC,0xFF,0xFF,0x03,0xFC,0xFF,0xFF,0x07,0xFC,0xFF,0xFF,0x0F,
0xFC,0xFF,0xFF,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFF,0xFF,0x1F,
0xFC,0xFF,0xFF,0x1F,0xFC,0xFF,0xFF,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFC,0xFF,0xFF,0x0F,0xFC,0xFF,0xFF,0x1F,0xFC,0xFF,0xFF,0x1F,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xF8,0xFF,0xFF,0x0F,0xFC,0xFF,0xFF,0x1F,0xFC,0xFF,0xFF,0x1F,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
const unsigned char Haze[] PROGMEM ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0xE0,0x01,0x1C,
0x0E,0xE0,0x01,0x1C,0x0E,0xC0,0x00,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xF0,0x07,0xF8,0x03,0xF8,0x0F,0xFE,0x07,0xFC,0x3F,0xFF,0x0F,
0x1E,0xBC,0x0F,0x1F,0x0E,0xF8,0x07,0x1E,0x0E,0xF0,0x03,0x1C,0x0E,0xE0,0x01,0x1C,
0x0E,0xF0,0x03,0x1C,0x0E,0xF0,0x03,0x1C,0x1E,0xB8,0x07,0x1E,0xFE,0x3F,0xFF,0x0F,
0xFC,0x1F,0xFE,0x0F,0xF8,0x0F,0xFC,0x03,0xE0,0x03,0xF0,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x0E,0xC0,0x00,0x1C,0x0E,0xE0,0x01,0x1C,0x0E,0xE0,0x01,0x1C,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
const unsigned char Windy[] PROGMEM ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xF8,0x01,0x00,0x00,0xFC,0x83,0x01,0x00,0x9C,0xE3,0x07,0x00,0x0C,0xF3,0x0F,
0x00,0x00,0x3B,0x1C,0x04,0xC0,0x1B,0x18,0xFE,0xFF,0x19,0x18,0xFE,0xFF,0x18,0x18,
0x00,0x00,0x00,0x1C,0x00,0x00,0x00,0x1E,0xFE,0xFF,0xFF,0x0F,0xFE,0xFF,0xFF,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0xFF,0xFF,0x03,0xFE,0xFF,0xFF,0x07,
0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x0C,0x00,0x00,0x30,0x0C,0x00,0x00,0x70,0x0E,
0x00,0x00,0xE0,0x07,0x00,0x00,0xC0,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
const unsigned char Unknown[] PROGMEM ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x0C,0x06,0xC3,0x01,0x1C,0x06,0xC3,0x01,0x1C,0x06,0xE3,0x03,
0x3C,0x86,0x61,0x03,0x7C,0x86,0x61,0x03,0x6C,0x86,0x71,0x07,0xCC,0xC6,0x30,0x06,
0xCC,0xC7,0xF8,0x0F,0x8C,0xC7,0xF8,0x0F,0x0C,0x67,0x1C,0x1C,0x0C,0x67,0x0C,0x18,
0x0C,0x66,0x0C,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

const unsigned char Home[] PROGMEM ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,
0x00,0xE0,0x01,0x00,0x00,0xF0,0x03,0x00,0x00,0xF8,0x07,0x00,0x00,0xFC,0x0F,0x00,
0x00,0xFE,0x1F,0x00,0x00,0xFF,0x3F,0x00,0x80,0xFF,0x7F,0x00,0xC0,0xFF,0xFF,0x00,
0xE0,0xFF,0xFF,0x01,0xF0,0xFF,0xFF,0x03,0xF8,0xFF,0xFF,0x07,0x20,0x00,0x00,0x01,
0x20,0x00,0x00,0x01,0x20,0x00,0x7F,0x01,0xA0,0x3F,0x41,0x01,0xA0,0x20,0x41,0x01,
0xA0,0x20,0x41,0x01,0xA0,0x20,0x41,0x01,0xA0,0x22,0x7F,0x01,0xA0,0x20,0x00,0x01,
0xA0,0x20,0x00,0x01,0xA0,0x20,0x00,0x01,0xA0,0x20,0x00,0x01,0xE0,0xFF,0xFF,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

const unsigned char Page1[] PROGMEM ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x8F,0x61,0x18,0x4F,0x92,0x24,0x4F,0x92,0x24,0x8F,0x61,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

const unsigned char Page2[] PROGMEM ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC6,0x63,0x18,0xC9,0x93,0x24,0xC9,0x93,0x24,0xC6,0x63,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

const unsigned char Page3[] PROGMEM ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x86,0xF1,0x18,0x49,0xF2,0x24,0x49,0xF2,0x24,0x86,0xF1,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

const unsigned char Page4[] PROGMEM ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x86,0x61,0x3C,0x49,0x92,0x3C,0x49,0x92,0x3C,0x86,0x61,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

const unsigned char tempicon[] PROGMEM={0x00,0x00,0x80,0x01,0x40,0x00,0x40,0x03,0x40,0x02,0x40,0x00,0x40,0x03,0x40,0x02,0x40,0x00,0x40,0x03,0x40,0x02,0x20,0x04,0x20,0x04,0x20,0x04,0xC0,0x03,0x00,0x00};

const unsigned char humiicon[] PROGMEM={0x00,0x00,0x80,0x01,0x80,0x01,0x40,0x02,0x40,0x02,0x20,0x04,0x20,0x04,0x10,0x08,0x08,0x10,0x08,0x10,0x08,0x10,0x28,0x10,0xC8,0x10,0x10,0x08,0xE0,0x07,0x00,0x00};

const unsigned char pericon[] PROGMEM={0x00,0x00,0x44,0x4A,0x24,0x20,0x10,0x10,0x08,0x08,0x04,0x24,0x52,0x22,0x00,0x00};

const unsigned char celicon[] PROGMEM={0x01,0x01,0x3C,0x42,0x42,0x02,0x02,0x02,0x02,0x02,0x02,0x42,0x42,0x3C,0x00,0x00};

const unsigned char mianlogo[] PROGMEM={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xF0,0xFF,0x03,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xF0,0x30,0x00,0x0C,0x00,
0x00,0xF0,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x60,0x30,0x00,0x0C,0x00,
0x00,0x30,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x60,0x30,0x00,0x0C,0x00,
0x00,0x30,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x60,0x30,0x00,0x0C,0x00,
0x00,0x30,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x60,0x30,0x00,0x0C,0x00,
0x00,0x30,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x60,0x30,0x00,0x0C,0x00,
0x00,0x30,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x60,0x30,0x00,0x0C,0x00,
0x00,0x30,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x60,0x30,0x00,0x0C,0x00,
0x00,0x30,0x00,0x0C,0x0E,0x00,0x00,0x00,0x00,0x03,0xC0,0x60,0x30,0x00,0x0C,0x00,
0x00,0x30,0x00,0x0C,0xCC,0x3F,0x00,0x00,0x00,0x03,0xC0,0x60,0x30,0x00,0x0C,0x00,
0x00,0x30,0x00,0x0F,0xFC,0x7F,0x00,0x00,0x00,0x03,0xC0,0x60,0x30,0x00,0x0C,0x00,
0x00,0xF0,0xFF,0x0F,0x3C,0x60,0x00,0x00,0x00,0x03,0xC0,0x60,0x30,0x00,0x0C,0x00,
0x00,0xF0,0xFF,0x07,0x0C,0x00,0x00,0x00,0x00,0x03,0xC0,0x60,0x30,0x00,0x0C,0x00,
0x00,0x30,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x03,0xC0,0x60,0x30,0x00,0x0C,0x00,
0x00,0x30,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x03,0xC0,0x60,0x30,0x00,0x0C,0x00,
0x00,0x30,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x03,0xC0,0x60,0x30,0x00,0x0C,0x00,
0x00,0x30,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x03,0xC0,0x60,0x30,0x00,0x0C,0x00,
0x00,0x30,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x03,0xC0,0x60,0x30,0x00,0x0C,0x00,
0x00,0x30,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x03,0xC0,0x60,0x30,0x00,0x0C,0x00,
0x00,0x30,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x03,0xD8,0x60,0x30,0x00,0x0C,0x00,
0x00,0x30,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x03,0xF8,0x60,0x30,0x00,0x0C,0x00,
0x00,0x30,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x03,0xF0,0x60,0x30,0x00,0x0C,0x00,
0x00,0x30,0x00,0x00,0x0C,0x00,0xE0,0xFF,0x07,0xFF,0xFF,0x60,0xF0,0xFF,0x0F,0x00,
0x00,0x30,0x00,0x00,0x0C,0x00,0xE0,0xFF,0x07,0xFF,0xFF,0xF1,0xF0,0xFF,0x0F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x03,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};