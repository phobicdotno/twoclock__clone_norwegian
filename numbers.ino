
void ett(uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG) {
  for (int i = 14; i < 20; i++) {
    matrix_ws2812b.setPixelColor(i, tempColorB, tempColorR, tempColorG);
  }
  
}

void to(uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG) {
  for (int i = 30; i < 34; i++) {
    matrix_ws2812b.setPixelColor(i, tempColorB, tempColorR, tempColorG);
  }
  
}

void tre(uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG) {
  // TR
  for (int i = 28; i < 32; i++) {
    matrix_ws2812b.setPixelColor(i, tempColorB, tempColorR, tempColorG);
  }
  // E
  for (int i = 4; i < 5; i++) {
    matrix_SK6812.setPixelColor(i, tempColorB, tempColorR, tempColorG);
  }
}

void fire(uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG) {
  for (int i = 54; i < 62; i++) {
    matrix_ws2812b.setPixelColor(i, tempColorB, tempColorR, tempColorG);
  }
  
}

void fem(uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG) {
  for (int i = 70; i < 76; i++) {
    matrix_ws2812b.setPixelColor(i, tempColorB, tempColorR, tempColorG);
  }
  
}

void seks(uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG) {
  for (int i = 46; i < 54; i++) {
    matrix_ws2812b.setPixelColor(i, tempColorB, tempColorR, tempColorG);
  }
  
}

void sju(uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG) {
  for (int i = 39; i < 44; i++) {
    matrix_ws2812b.setPixelColor(i, tempColorB, tempColorR, tempColorG);
  }
  
}

void aatte(uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG) {
  for (int i = 18; i < 26; i++) {
    matrix_ws2812b.setPixelColor(i, tempColorB, tempColorR, tempColorG);
  }
  
}

void ni(uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG) {
  for (int i = 10; i < 14; i++) {
    matrix_ws2812b.setPixelColor(i, tempColorB, tempColorR, tempColorG);
  }
  
}

void ti(uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG) {
  for (int i = 12; i < 16; i++) {
    matrix_ws2812b.setPixelColor(i, tempColorB, tempColorR, tempColorG);
  }
  
}

void elleve(uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG) {
  // Mangler første bokstav E, må styres fra andre arduino.
  for (int i = 0; i < 10; i++) {
    matrix_ws2812b.setPixelColor(i, tempColorB, tempColorR, tempColorG);
  }
  for (int i = 4; i < 5; i++) {
    matrix_SK6812.setPixelColor(i, tempColorB, tempColorR, tempColorG);
  }
     // E
    // LLEVE
}

void tolv(uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG) {
  for (int i = 30; i < 38; i++) {
    matrix_ws2812b.setPixelColor(i, tempColorB, tempColorR, tempColorG);
  }
  
}
