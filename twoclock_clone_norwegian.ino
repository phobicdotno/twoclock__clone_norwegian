// TwoClock WallClock Clone Norwegian by phobic.no
// Version 0.1

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#include "randomhat.h"    // Generate random numbers
#include "RTC.h"    // Set the time to DS3231


#define PIN 12  // Pin for data to Matrix LED

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)
Adafruit_NeoPixel matrix_ws2812b = Adafruit_NeoPixel(100, PIN, NEO_RGB + NEO_KHZ800);

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
#define RANDOM   RGB_random() // Generates a random RGB value

void setup() {
  setTimeDS3231();  // Only need to run this the first time
  matrix_ws2812b.begin();
  matrix_ws2812b.show(); // Initialize all pixels to 'off'
  Serial.begin(9600);      // open the serial port at 9600 bps:
  Wire.begin(8);                // join i2c bus with address #8
  Wire.onRequest(requestEvent); // register event
}

int pass = 0;
int d1 = 500;
unsigned char message="";
unsigned long timeUnix;
byte unix_buffer[4]; 

int hours;
int minutes;

void loop() {
  DateTime now = rtc.now();
  hours = now.hour();
  minutes = now.minute();
  timeUnix = now.unixtime();
  Serial.print(timeUnix);
  Serial.print(" - ");
  Serial.print(hours);
  Serial.print(":");
  Serial.println(minutes);

//ett();
//delay(500);
//to();
//delay(500);
//tre();
//delay(500);
//fire();
//delay(500);
//fem();
//delay(500);
//seks();
//delay(500);
//sju();
//delay(500);
//aatte();
//delay(500);
//ni();
//delay(500);
//ti();
//delay(500);
//elleve();
//delay(500);
//tolv();
//delay(500);




//  Minutes(minutes);
//  Hours(minutes, hours);
/*
// DEBUG: Serial output for current time
    Serial.print(now.hour(), DEC);
    Serial.print(':');
    Serial.print(now.minute(), DEC);
    Serial.print(':');
    Serial.print(now.second(), DEC);
    Serial.println();
*/
/*
// DEBUG: Loop fast through 12 hours cycle
    for (int j = 1 ; j < 13; j++){
     for (int i = 1 ; i < 60; i+=5){
       matrix.fillScreen(0);
       delay(1000);
       Hours(i, j);
       Minutes(i);
      Serial.print(j);
      Serial.print(":");
      Serial.println(i);

       matrix.show();
     }
    }
*/
//  phobic();
//  test_words();
  matrix_ws2812b.show();
  delay(1000);

} // loop

void requestEvent() {
  Wire.write(hours); // respond with message of 1 bytes
  Wire.write(minutes); // respond with message of 1 bytes
  // as expected by master
}

void cycleTimeTest() {
  // Loop debug should be here. 
  // Need to find out how to reach
  // Hours/Minutes functions from 
  // inside this function
  }

uint16_t RGB_random(){
  int randR = randomHat();
  int randG = randomHat();
  int randB = randomHat();
  return matrix_ws2812b.Color(randR, randG, randB);
  }

void phobic() {
}

byte convert_unsigned_long_to_bytes(unsigned long uLong)
{  
  byte buf[4];
  buf[0] = uLong & 255;
  buf[1] = (uLong >> 8)  & 255;
  buf[2] = (uLong >> 16) & 255;
  buf[3] = (uLong >> 24) & 255;
  return buf;
}
