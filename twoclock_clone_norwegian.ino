// TwoClock Clone Norwegian by phobic.no
// Version 0.5

#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#include "randomhat.h"    // Generate random numbers
#include "RTC.h"    // Set the time to DS3231

#define PIN 3  // Pin for data to Matrix LED

// MATRIX DECLARATION:
// Parameter 1 = width of NeoPixel matrix
// Parameter 2 = height of matrix
// Parameter 3 = pin number (most are valid)
// Parameter 4 = matrix layout flags, add together as needed:
//   NEO_MATRIX_TOP, NEO_MATRIX_BOTTOM, NEO_MATRIX_LEFT, NEO_MATRIX_RIGHT:
//     Position of the FIRST LED in the matrix; pick two, e.g.
//     NEO_MATRIX_TOP + NEO_MATRIX_LEFT for the top-left corner.
//   NEO_MATRIX_ROWS, NEO_MATRIX_COLUMNS: LEDs are arranged in horizontal
//     rows or in vertical columns, respectively; pick one or the other.
//   NEO_MATRIX_PROGRESSIVE, NEO_MATRIX_ZIGZAG: all rows/columns proceed
//     in the same order, or alternate lines reverse direction; pick one.
//   See example below for these values in action.
// Parameter 5 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)

// 8x8 tall matrix

Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(8, 8, PIN,
                            NEO_MATRIX_TOP     + NEO_MATRIX_LEFT +
                            NEO_MATRIX_ROWS + NEO_MATRIX_PROGRESSIVE,
                            NEO_GRB            + NEO_KHZ800);   // Correct setting according to text on back side.

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
  matrix.setTextWrap(false);
  matrix.setBrightness(200);
  matrix.setTextColor(colors[0]);
  Serial.begin(9600);      // open the serial port at 9600 bps:
}

int x    = matrix.width();
int pass = 0;
int d1 = 500;

void loop() {
  DateTime now = rtc.now();
    Serial.print(now.hour(), DEC);
    Serial.print(':');
    Serial.print(now.minute(), DEC);
    Serial.print(':');
    Serial.print(now.second(), DEC);
    Serial.println();

  matrix.fillScreen(0);
  minutes();
  hours();
//  phobic();
//  test_words();
  matrix.show();
  delay(60000);

} // loop

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

void minutes() {
  DateTime now = rtc.now();
  int minutes = now.minute();
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
void hours() {
  DateTime now = rtc.now();
  int hours = now.hour();
  int minutes = now.minute();
  if (hours > 13)       // Change 24-hour system to 12-hours 
  {
    hours = hours-12;
  }
  if (hours == 1) {
    if (minutes < 30 ) {
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
