// TwoClock Clone Norwegian by phobic.no
// Version 0.6

#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#include "randomhat.h"    // Generate random numbers
#include "RTC.h"    // Set the time to DS3231

#define PIN 13  // Pin for data to Matrix LED

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)
Adafruit_NeoPixel matrix = Adafruit_NeoPixel(100, PIN, NEO_RGB + NEO_KHZ800);

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

const uint16_t colors[] = {
  matrix.Color(255, 0, 0), matrix.Color(0, 255, 0), matrix.Color(0, 0, 255)
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
  matrix.begin();
  matrix.show(); // Initialize all pixels to 'off'
  Serial.begin(9600);      // open the serial port at 9600 bps:
}

int x    = matrix.width();
int pass = 0;
int d1 = 500;

void loop() {
  DateTime now = rtc.now();
  matrix.fillScreen(0);
  int hours = now.hour();
  int minutes = now.minute();

  Minutes(minutes);
  Hours(minutes, hours);
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
  matrix.show();
  delay(60000);

} // loop

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
  return matrix.Color(randR, randG, randB);
  }

void phobic() {
  matrix.drawFastHLine(5, 0, 3, RANDOM);
  matrix.drawFastHLine(5, 1, 3, RANDOM);
  matrix.drawFastHLine(3, 0, 2, RANDOM);  // Row#3, Line#0
}

void fem_() {
  matrix.drawFastHLine(0, 0, 3, RANDOM);
}
void ti_() {
  matrix.drawFastHLine(3, 0, 2, RANDOM);  // Row#3, Line#0
}
void kvart_() {
  matrix.drawFastHLine(0, 1, 5, RANDOM);  // Row#0, Line#1
}
void halv_() {
  matrix.drawFastHLine(0, 3, 4, RANDOM); 
}
void pa_() {
  matrix.drawFastHLine(0, 2, 2, RANDOM);
}
void over_() {
  matrix.drawFastHLine(3, 2, 4, RANDOM);
}

// NUMBERS

void ett() {
  matrix.drawFastHLine(5, 6, 3, RANDOM);
}
void to() {
  matrix.drawFastHLine(0, 5, 2, RANDOM);
}
void tre() {
  matrix.drawFastVLine(0, 5, 3, RANDOM);
}
void fire() {
  matrix.drawFastHLine(0, 4, 4, RANDOM);
}
void fem() {
  matrix.drawFastHLine(5, 3, 3, RANDOM);
}
void seks() {
  matrix.drawFastHLine(4, 4, 4, RANDOM);
}
void sju() {
  matrix.drawFastHLine(4, 5, 3, RANDOM);
}
void atte() {
  matrix.drawFastHLine(2, 6, 4, RANDOM);
}
void ni() {
  matrix.drawFastHLine(6, 7, 2, RANDOM);
}
void ti() {
  matrix.drawFastVLine(7, 6, 2, RANDOM);
}
void elleve() {
  matrix.drawFastHLine(0, 7, 6, RANDOM);
}
void tolv() {
  matrix.drawFastHLine(0, 5, 4, RANDOM);
}

// MINUTES

void Minutes(int minutes) {
  if (minutes > 3 && minutes <= 7) {
    fem_(); over_();   Serial.println("Ca fem over");
    }

  if (minutes > 7 && minutes <= 13) {
    ti_(); over_();   Serial.println("Ca ti over");
    }

  if (minutes > 13 && minutes <= 18) {
    kvart_(); over_();   Serial.println("Ca kvart over");
    }

  if (minutes > 18 && minutes <= 23) {
    ti_(); pa_(); halv_();  Serial.println("Ca ti på halv");
    }

  if (minutes > 23 && minutes <= 28) {
    fem_(); pa_(); halv_();  Serial.println("Ca 5 på halv");
    }

  if (minutes > 28 && minutes <= 33) {
    halv_();   Serial.println("Ca halv");
    }

  if (minutes > 33 && minutes <= 38) {
    fem_(); over_(); halv_();  Serial.println("Ca fem over halv");
    }

  if (minutes > 38 && minutes <= 43) {
    ti_(); over_(); halv_();  Serial.println("Ca ti over halv");
    }

  if (minutes > 43 && minutes <= 48) {
    kvart_(); pa_();  Serial.println("Ca kvart på");
    }

  if (minutes > 48 && minutes <= 53) {
    ti_(); pa_();  Serial.println("Ca ti på");
    }

  if (minutes > 53 && minutes <= 58) {
    fem_(); pa_();  Serial.println("Ca fem på");
    }
}
void Hours(int minutes, int hours) {
  if (hours > 12)       // Change 24-hour system to 12-hours 
  {
    hours = hours-12;
  }
  if (hours == 1) {
      if (minutes < 17 ) {
      ett();//   Serial.println("Mindre enn tretti");
    }
    else {
      to();//  Serial.println("Mer enn tretti");
    }
  } // if
  if (hours == 2) { if (minutes < 17 ) { to(); }  else { tre(); }}
  if (hours == 3) { if (minutes < 17 ) { tre(); }  else { fire(); }}
  if (hours == 4) { if (minutes < 17 ) { fire(); }  else { fem(); }}
  if (hours == 5) { if (minutes < 17 ) { fem(); }  else { seks(); }}
  if (hours == 6) { if (minutes < 17 ) { seks(); }  else { sju(); }}
  if (hours == 7) { if (minutes < 17 ) { sju(); }  else { atte(); }}
  if (hours == 8) { if (minutes < 17 ) { atte(); }  else { ni(); }}
  if (hours == 9) { if (minutes < 17 ) { ni(); }  else { ti(); }}
  if (hours == 10) { if (minutes < 17 ) { ti(); }  else { elleve(); }}
  if (hours == 11) { if (minutes < 17 ) { elleve(); }  else { tolv(); }}
  if (hours == 12) { if (minutes < 17 ) { tolv(); }  else { ett(); }}
  if (hours == 0) { if (minutes < 17 ) { ett(); }  else { to(); }}
}

void test_words() {
  fem_();  matrix.show(); delay(d1); matrix.fillScreen(0);
  ti_();  matrix.show(); delay(d1);  matrix.fillScreen(0);
  kvart_();  matrix.show(); delay(d1); matrix.fillScreen(0);
  halv_();  matrix.show(); delay(d1); matrix.fillScreen(0);
  pa_();  matrix.show(); delay(d1); matrix.fillScreen(0);
  over_();   matrix.show(); delay(d1); matrix.fillScreen(0);
  ett();   matrix.show(); delay(d1); matrix.fillScreen(0);
  to();   matrix.show(); delay(d1); matrix.fillScreen(0);
  tre();   matrix.show(); delay(d1); matrix.fillScreen(0);
  fire();   matrix.show(); delay(d1); matrix.fillScreen(0);
  fem();   matrix.show(); delay(d1); matrix.fillScreen(0);
  seks();   matrix.show(); delay(d1); matrix.fillScreen(0);
  sju();   matrix.show(); delay(d1); matrix.fillScreen(0);
  atte();   matrix.show(); delay(d1); matrix.fillScreen(0);
  ni();   matrix.show(); delay(d1); matrix.fillScreen(0);
  ti();   matrix.show(); delay(d1); matrix.fillScreen(0);
  elleve();   matrix.show(); delay(d1); matrix.fillScreen(0);
  tolv();   matrix.show(); delay(d1); matrix.fillScreen(0);
}
