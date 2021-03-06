
// Adafruit_NeoMatrix example for single NeoPixel Shield.
// Scrolls 'Howdy' across the matrix in a portrait (vertical) orientation.

#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#include <Time.h>
#include <TimeLib.h>

#ifndef PSTR
#define PSTR // Make Arduino Due happy
#endif

#define PIN 6

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


// Example for NeoPixel Shield.  In this application we'd like to use it
// as a 5x8 tall matrix, with the USB port positioned at the top of the
// Arduino.  When held that way, the first pixel is at the top right, and
// lines are arranged in columns, progressive order.  The shield uses
// 800 KHz (v2) pixels that expect GRB color data.
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

void setup() {
  matrix.begin();
  matrix.setTextWrap(false);
  matrix.setBrightness(100);
  matrix.setTextColor(colors[0]);
  Serial.begin(9600);      // open the serial port at 9600 bps:
  setTime(19, 14, 0, 4, 7, 18);

}

int x    = matrix.width();
int pass = 0;
int d1 = 500;

void loop() {
/*  Serial.print(hour());
  Serial.print(":");
  Serial.print(minute());
  Serial.print(":");
  Serial.println(second());
  //  matrix.fillScreen(0);
  matrix.fillScreen(0);
*/
  matrix.fillScreen(0);
// HOURS
  if (hourFormat12() == 1) {
    if (minute() < 30 ) {
      ett();//   Serial.println("Mindre enn tretti");
    }
    else {
      to();//  Serial.println("Mer enn tretti");
    }
  } // if
  if (hourFormat12() == 2) { if (minute() < 30 ) { to(); }  else { tre(); }}
  if (hourFormat12() == 3) { if (minute() < 30 ) { tre(); }  else { fire(); }}
  if (hourFormat12() == 4) { if (minute() < 30 ) { fire(); }  else { fem(); }}
  if (hourFormat12() == 5) { if (minute() < 30 ) { fem(); }  else { seks(); }}
  if (hourFormat12() == 6) { if (minute() < 30 ) { seks(); }  else { sju(); }}
  if (hourFormat12() == 7) { if (minute() < 30 ) { sju(); }  else { atte(); }}
  if (hourFormat12() == 8) { if (minute() < 30 ) { atte(); }  else { ni(); }}
  if (hourFormat12() == 9) { if (minute() < 30 ) { ni(); }  else { ti(); }}
  if (hourFormat12() == 10) { if (minute() < 30 ) { ti(); }  else { elleve(); }}
  if (hourFormat12() == 11) { if (minute() < 30 ) { elleve(); }  else { tolv(); }}
  if (hourFormat12() == 12) { if (minute() < 30 ) { tolv(); }  else { ett(); }}
  
// MINUTES
  if (minute() > 3 && minute() <= 7) {
    fem_(); over_();   Serial.println("Ca fem over");
    }

  if (minute() > 7 && minute() <= 13) {
    ti_(); over_();   Serial.println("Ca ti over");
    }

  if (minute() > 13 && minute() <= 18) {
    kvart_(); over_();   Serial.println("Ca kvart over");
    }

  if (minute() > 18 && minute() <= 23) {
    ti_(); pa_(); halv_();  Serial.println("Ca ti på halv");
    }

  if (minute() > 23 && minute() <= 28) {
    fem_(); pa_(); halv_();  Serial.println("Ca 5 på halv");
    }

  if (minute() > 28 && minute() <= 33) {
    halv_();   Serial.println("Ca halv");
    }

  if (minute() > 33 && minute() <= 38) {
    fem_(); over_(); halv_();  Serial.println("Ca fem over halv");
    }

  if (minute() > 38 && minute() <= 43) {
    ti_(); over_(); halv_();  Serial.println("Ca ti over halv");
    }

  if (minute() > 43 && minute() <= 48) {
    kvart_(); pa_();  Serial.println("Ca kvart på");
    }

  if (minute() > 48 && minute() <= 53) {
    ti_(); pa_();  Serial.println("Ca kvart på");
    }

  if (minute() > 53 && minute() <= 58) {
    fem_(); pa_();  Serial.println("Ca fem på");
    }

  matrix.show();
} // loop


void fem_() {
  matrix.drawFastHLine(0, 0, 3, RED);
}
void ti_() {
  matrix.drawFastHLine(0, 1, 2, BLUE);  // Row#0, Line#1
}
void kvart_() {
  matrix.drawFastHLine(3, 0, 5, YELLOW);  // Row#3, Line#0
}
void halv_() {
//  matrix.drawFastHLine(3, 1, 2, GREEN);   // MANGLER TEKST!
}
void pa_() {
  matrix.drawFastHLine(3, 1, 2, GREEN);
}
void over_() {
  matrix.drawFastHLine(0, 2, 4, CYAN);
}

void ett() {
  matrix.drawFastHLine(5, 2, 3, MAGENTA);
}
void to() {
  matrix.drawFastHLine(0, 3, 2, WHITE);
}
void tre() {
  matrix.drawFastHLine(5, 3, 3, RED);
}
void fire() {
  matrix.drawFastHLine(0, 4, 4, BLUE);
}
void fem() {
  matrix.drawFastHLine(2, 3, 3, YELLOW);
}
void seks() {
  matrix.drawFastHLine(4, 4, 4, GREEN);
}
void sju() {
  matrix.drawFastHLine(5, 5, 3, CYAN);
}
void atte() {
  matrix.drawFastHLine(0, 6, 4, MAGENTA);
}
void ni() {
  matrix.drawFastHLine(4, 6, 2, WHITE);
}
void ti() {
  matrix.drawFastHLine(6, 6, 2, RED);
}
void elleve() {
  matrix.drawFastHLine(1, 7, 6, BLUE);
}
void tolv() {
  matrix.drawFastHLine(0, 5, 4, YELLOW);
}
void l_dot() {
  matrix.drawFastHLine(0, 7, 1, GREEN);
}
void r_dot() {
  matrix.drawFastHLine(7, 7, 1, CYAN);
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
  l_dot();   matrix.show(); delay(d1); matrix.fillScreen(0);
  r_dot();   matrix.show(); delay(d1); matrix.fillScreen(0);
}
