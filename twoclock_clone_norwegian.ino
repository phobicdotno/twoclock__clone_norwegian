

// TwoClock Clone by phobic.no
// Version 0.4

#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#include "randomhat.h"    // Generate random numbers
#include "RTC.h"    // Set the time




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

// Color definitions
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
  matrix.setBrightness(100);
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
  matrix.show();
  delay(5000);

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
  if (now.minute() > 3 && now.minute() <= 7) {
    fem_(); over_();   Serial.println("Ca fem over");
    }

  if (now.minute() > 7 && now.minute() <= 13) {
    ti_(); over_();   Serial.println("Ca ti over");
    }

  if (now.minute() > 13 && now.minute() <= 18) {
    kvart_(); over_();   Serial.println("Ca kvart over");
    }

  if (now.minute() > 18 && now.minute() <= 23) {
    ti_(); pa_(); halv_();  Serial.println("Ca ti på halv");
    }

  if (now.minute() > 23 && now.minute() <= 28) {
    fem_(); pa_(); halv_();  Serial.println("Ca 5 på halv");
    }

  if (now.minute() > 28 && now.minute() <= 33) {
    halv_();   Serial.println("Ca halv");
    }

  if (now.minute() > 33 && now.minute() <= 38) {
    fem_(); over_(); halv_();  Serial.println("Ca fem over halv");
    }

  if (now.minute() > 38 && now.minute() <= 43) {
    ti_(); over_(); halv_();  Serial.println("Ca ti over halv");
    }

  if (now.minute() > 43 && now.minute() <= 48) {
    kvart_(); pa_();  Serial.println("Ca kvart på");
    }

  if (now.minute() > 48 && now.minute() <= 53) {
    ti_(); pa_();  Serial.println("Ca ti på");
    }

  if (now.minute() > 53 && now.minute() <= 58) {
    fem_(); pa_();  Serial.println("Ca fem på");
    }
}
void hours() {
  DateTime now = rtc.now();
  if (now.hour() == 1) {
    if (now.minute() < 30 ) {
      ett();//   Serial.println("Mindre enn tretti");
    }
    else {
      to();//  Serial.println("Mer enn tretti");
    }
  } // if
  if (now.hour() == 2) { if (now.minute() < 30 ) { to(); }  else { tre(); }}
  if (now.hour() == 3) { if (now.minute() < 30 ) { tre(); }  else { fire(); }}
  if (now.hour() == 4) { if (now.minute() < 30 ) { fire(); }  else { fem(); }}
  if (now.hour() == 5) { if (now.minute() < 30 ) { fem(); }  else { seks(); }}
  if (now.hour() == 6) { if (now.minute() < 30 ) { seks(); }  else { sju(); }}
  if (now.hour() == 7) { if (now.minute() < 30 ) { sju(); }  else { atte(); }}
  if (now.hour() == 8) { if (now.minute() < 30 ) { atte(); }  else { ni(); }}
  if (now.hour() == 9) { if (now.minute() < 30 ) { ni(); }  else { ti(); }}
  if (now.hour() == 10) { if (now.minute() < 30 ) { ti(); }  else { elleve(); }}
  if (now.hour() == 11) { if (now.minute() < 30 ) { elleve(); }  else { tolv(); }}
  if (now.hour() == 12) { if (now.minute() < 30 ) { tolv(); }  else { ett(); }}
}

// void drawPixel(uint16_t x, uint16_t y, uint16_t color);
// void drawLine(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint16_t color);
// For horizontal or vertical lines, there are optimized line-drawing
// functions that avoid the angular calculations:
// void drawFastVLine(uint16_t x0, uint16_t y0, uint16_t length, uint16_t color);
// void drawFastHLine(uint8_t x0, uint8_t y0, uint8_t length, uint16_t color);

// void drawRect(uint16_t x0, uint16_t y0, uint16_t w, uint16_t h, uint16_t color);
// void fillRect(uint16_t x0, uint16_t y0, uint16_t w, uint16_t h, uint16_t color);

//void drawCircle(uint16_t x0, uint16_t y0, uint16_t r, uint16_t color);
//void fillCircle(uint16_t x0, uint16_t y0, uint16_t r, uint16_t color);

void test_words() {
  fem_();  matrix.show(); delay(d1); matrix.fillScreen(0);
  ti_();  matrix.show(); delay(d1);  matrix.fillScreen(0);
  kvart_();  matrix.show(); delay(d1); matrix.fillScreen(0);
  halv_();  matrix.show(); delay(d1); matrix.fillScreen(0);  // MANGLER TEKST!
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
