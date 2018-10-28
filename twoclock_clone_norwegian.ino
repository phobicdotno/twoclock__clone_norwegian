// TwoClock WallClock Clone Norwegian by phobic.no
// Version 0.1

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#include "randomhat.h"    // Generate random numbers
#include "RTC.h"    // Set the time to DS3231

#define PIN_SK6812 12
#define PIN_ws2812b 13

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)
Adafruit_NeoPixel matrix_ws2812b = Adafruit_NeoPixel(120, PIN_ws2812b, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel matrix_SK6812  = Adafruit_NeoPixel(90, PIN_SK6812, NEO_GRB + NEO_KHZ800);

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

const uint16_t colors[] = {
  matrix_ws2812b.Color(255, 0, 0), matrix_ws2812b.Color(0, 255, 0), matrix_ws2812b.Color(0, 0, 255)
};

// Color definitions (not needed here)
#define BLACK    0x0000
#define BLUE     0x001F
#define RED      0xF800
#define GREEN    0x07E0
#define CYAN     0x07FF
#define MAGENTA  0xF81F
#define YELLOW   0xFFE0
#define WHITE    0xFFFF
#define RANDOM   RGB_RANDOM() // Generates a RANDOM RGB value
#define RANDOMW  RGBW_RANDOM() // Generates a RANDOM RGBW value

void setup() {
  setTimeDS3231();  // Only need to run this the first time
//  rtc.adjust(DateTime(2018, 10, 28, 21, 49, 0));
  Serial.begin(9600);
  matrix_ws2812b.begin();
  matrix_ws2812b.setBrightness(255);  // 0-255
  matrix_ws2812b.clear();
   // Initialize all pixels to 'off'
  
  matrix_SK6812.begin();
  matrix_SK6812.setBrightness(255);  // 0-255
  matrix_SK6812.clear();
   // Initialize all pixels to 'off'
}

int pass = 0;
int d1 = 500;
unsigned char message="";
unsigned long timeUnix;
byte unix_buffer[4]; 

int hours;
int minutes;
int delayTime = 1000;


uint16_t RGB_RANDOM(){
  int randR = randomHat();
  int randG = randomHat();
  int randB = randomHat();
  return matrix_ws2812b.Color(randR, randG, randB);
  }

uint16_t RGBW_RANDOM(){
  int randR = randomHat();
  int randG = randomHat();
  int randB = randomHat();
  int randW = 0;
  return matrix_SK6812.Color(randR, randG, randB, randW);
  }
