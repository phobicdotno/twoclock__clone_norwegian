
void ett() {
  for (int i = 14; i < 20; i++) {
    matrix_ws2812b.setPixelColor(i, RANDOM);
  }
  matrix_ws2812b.show();
}

void to() {
  for (int i = 30; i < 34; i++) {
    matrix_ws2812b.setPixelColor(i, RANDOM);
  }
  matrix_ws2812b.show();
}

void tre() {  // Mangler E
  uint16_t colorTemp = RANDOM;
  for (int i = 28; i < 32; i++) {
    matrix_ws2812b.setPixelColor(i, colorTemp);
  }
  for (int i = 4; i < 5; i++) {
    matrix_SK6812.setPixelColor(i, colorTemp);
  }
  matrix_ws2812b.show();  // TR
  matrix_SK6812.show();   // E
}

void fire() {
  for (int i = 54; i < 62; i++) {
    matrix_ws2812b.setPixelColor(i, RANDOM);
  }
  matrix_ws2812b.show();
}

void fem() {
  for (int i = 70; i < 76; i++) {
    matrix_ws2812b.setPixelColor(i, RANDOM);
  }
  matrix_ws2812b.show();
}

void seks() {
  for (int i = 46; i < 54; i++) {
    matrix_ws2812b.setPixelColor(i, RANDOM);
  }
  matrix_ws2812b.show();
}

void sju() {
  for (int i = 39; i < 44; i++) {
    matrix_ws2812b.setPixelColor(i, RANDOM);
  }
  matrix_ws2812b.show();
}

void aatte() {
  for (int i = 18; i < 26; i++) {
    matrix_ws2812b.setPixelColor(i, RANDOM);
  }
  matrix_ws2812b.show();
}

void ni() {
  for (int i = 10; i < 14; i++) {
    matrix_ws2812b.setPixelColor(i, RANDOM);
  }
  matrix_ws2812b.show();
}

void ti() {
  for (int i = 12; i < 16; i++) {
    matrix_ws2812b.setPixelColor(i, RANDOM);
  }
  matrix_ws2812b.show();
}

void elleve() {
  // Mangler første bokstav E, må styres fra andre arduino.
  for (int i = 0; i < 10; i++) {
    matrix_ws2812b.setPixelColor(i, RANDOM);
  }
  for (int i = 4; i < 5; i++) {
    matrix_SK6812.setPixelColor(i, RANDOM);
  }
  matrix_SK6812.show();   // E
  matrix_ws2812b.show();  // LLEVE
}

void tolv() {
  for (int i = 30; i < 38; i++) {
    matrix_ws2812b.setPixelColor(i, RANDOM);
  }
  matrix_ws2812b.show();
}
