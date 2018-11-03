
void ett(uint16_t tempColor) {
  for (int i = 14; i < 20; i++) {
    matrix_ws2812b.setPixelColor(i, tempColor);
  }
  
}

void to(uint16_t tempColor) {
  for (int i = 30; i < 34; i++) {
    matrix_ws2812b.setPixelColor(i, tempColor);
  }
  
}

void tre(uint16_t tempColor) {
  // TR
  for (int i = 28; i < 32; i++) {
    matrix_ws2812b.setPixelColor(i, tempColor);
  }
  // E
  for (int i = 4; i < 5; i++) {
    matrix_SK6812.setPixelColor(i, tempColor);
  }
}

void fire(uint16_t tempColor) {
  for (int i = 54; i < 62; i++) {
    matrix_ws2812b.setPixelColor(i, tempColor);
  }
  
}

void fem(uint16_t tempColor) {
  for (int i = 70; i < 76; i++) {
    matrix_ws2812b.setPixelColor(i, tempColor);
  }
  
}

void seks(uint16_t tempColor) {
  for (int i = 46; i < 54; i++) {
    matrix_ws2812b.setPixelColor(i, tempColor);
  }
  
}

void sju(uint16_t tempColor) {
  for (int i = 39; i < 44; i++) {
    matrix_ws2812b.setPixelColor(i, tempColor);
  }
  
}

void aatte(uint16_t tempColor) {
  for (int i = 18; i < 26; i++) {
    matrix_ws2812b.setPixelColor(i, tempColor);
  }
  
}

void ni(uint16_t tempColor) {
  for (int i = 10; i < 14; i++) {
    matrix_ws2812b.setPixelColor(i, tempColor);
  }
  
}

void ti(uint16_t tempColor) {
  for (int i = 12; i < 16; i++) {
    matrix_ws2812b.setPixelColor(i, tempColor);
  }
  
}

void elleve(uint16_t tempColor) {
  // Mangler første bokstav E, må styres fra andre arduino.
  for (int i = 0; i < 10; i++) {
    matrix_ws2812b.setPixelColor(i, tempColor);
  }
  for (int i = 4; i < 5; i++) {
    matrix_SK6812.setPixelColor(i, tempColor);
  }
     // E
    // LLEVE
}

void tolv(uint16_t tempColor) {
  for (int i = 30; i < 38; i++) {
    matrix_ws2812b.setPixelColor(i, tempColor);
  }
  
}
