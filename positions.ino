void halv_() {
  cls();
  for (int i = 62; i < 68; i++) {
    matrix_ws2812b.setPixelColor(i, 0, 255, 255);
  }
  for (int i = 6; i < 7; i++) {
    matrix_SK6812.setPixelColor(i, 0, 255, 255);
  }
  matrix_SK6812.show();   // H
  matrix_ws2812b.show();  // ALV
}

void over_(){
  for(int i = 78; i < 86; i++){
    matrix_SK6812.setPixelColor(i, 0, 0, 255);  }
    matrix_SK6812.show();  }

void kvart_(){
  for(int i = 10; i < 20; i++){
    matrix_SK6812.setPixelColor(i, 0, 0, 255);  }
    matrix_SK6812.show();  }

void ti_(){
  for(int i = 32; i < 36; i++){
    matrix_SK6812.setPixelColor(i, 0, 0, 255);  }
    matrix_SK6812.show();  }

void fem_(){
  for(int i = 36; i < 42; i++){
    matrix_SK6812.setPixelColor(i, 0, 0, 255);  }
    matrix_SK6812.show();  }

// *Å - mangler P fra Arduino #2
void paa_() {
  cls();
  for (int i = 88; i < 90; i++) {
    matrix_ws2812b.setPixelColor(i, 1, 1, 1);
  }
  for (int i = 6; i < 7; i++) {
    matrix_SK6812.setPixelColor(i, 0, 0, 255);
  }
  matrix_SK6812.show();   // P
  matrix_ws2812b.show();  // Å
}

void dot1() {
  for (int i = 3; i < 4; i++) {
    matrix_SK6812.setPixelColor(i, 255, 255, 255);
  }
  matrix_SK6812.show();
}

void dot2() {
  for (int i = 2; i < 3; i++) {
    matrix_SK6812.setPixelColor(i, 255, 0, 0);
  }
  matrix_SK6812.show();
}

void dot3() {
  for (int i = 1; i < 2; i++) {
    matrix_SK6812.setPixelColor(i, 0, 255, 0);
  }
  matrix_SK6812.show();
}

void dot4() {
  for (int i = 0; i < 1; i++) {
    matrix_SK6812.setPixelColor(i, 0, 0, 255);
  }
  matrix_SK6812.show();
}

void phobic() {
  for (int i = 20; i < 32; i++) {
    matrix_SK6812.setPixelColor(i, 0, 0, 255);
  }
  matrix_SK6812.show();
}
