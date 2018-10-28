void halv_() {
  cls();
  uint16_t colorTemp = RANDOM;
  for (int i = 62; i < 68; i++) {
    matrix_ws2812b.setPixelColor(i, colorTemp);
  }
  for (int i = 6; i < 7; i++) {
    matrix_SK6812.setPixelColor(i, colorTemp);
  }
  matrix_SK6812.show();   // H
  matrix_ws2812b.show();  // ALV
}

void over_(){
  for(int i = 78; i < 86; i++){
    matrix_SK6812.setPixelColor(i, RANDOM);  }
    matrix_SK6812.show();  }

void kvart_(){
  for(int i = 12; i < 22; i++){
    matrix_SK6812.setPixelColor(i, RANDOM);  }
    matrix_SK6812.show();  }

void ti_(){
  for(int i = 34; i < 38; i++){
    matrix_SK6812.setPixelColor(i, RANDOM);  }
    matrix_SK6812.show();  }

void fem_(){
  for(int i = 38; i < 44; i++){
    matrix_SK6812.setPixelColor(i, RANDOM);  }
    matrix_SK6812.show();  }

void paa_() {
  cls();
  for (int i = 8; i < 12; i++) {
    matrix_SK6812.setPixelColor(i, RANDOM);
  }
  matrix_SK6812.show();   // P

}

void dot1() {
  for (int i = 3; i < 4; i++) {
    matrix_SK6812.setPixelColor(i, RANDOM);
  }
  matrix_SK6812.show();
}

void dot2() {
  for (int i = 2; i < 3; i++) {
    matrix_SK6812.setPixelColor(i, RANDOM);
  }
  matrix_SK6812.show();
}

void dot3() {
  for (int i = 1; i < 2; i++) {
    matrix_SK6812.setPixelColor(i, RANDOM);
  }
  matrix_SK6812.show();
}

void dot4() {
  for (int i = 0; i < 1; i++) {
    matrix_SK6812.setPixelColor(i, RANDOM);
  }
  matrix_SK6812.show();
}

void phobic() {
  for (int i = 22; i < 34; i++) {
    matrix_SK6812.setPixelColor(i, RANDOM);
  }
  matrix_SK6812.show();
}
