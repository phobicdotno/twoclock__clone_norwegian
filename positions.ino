void halv_(uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG) {
  for (int i = 62; i < 68; i++) {
    matrix_ws2812b.setPixelColor(i, tempColorB, tempColorR, tempColorG);
  }
  for (int i = 6; i < 7; i++) {
    matrix_SK6812.setPixelColor(i, tempColorB, tempColorR, tempColorG);
  }
     // H
    // ALV
}

void over_(uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG){
  for(int i = 78; i < 86; i++){
    matrix_ws2812b.setPixelColor(i, tempColorB, tempColorR, tempColorG);  }
      }

void kvart_(uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG){
  for(int i = 12; i < 22; i++){
    matrix_SK6812.setPixelColor(i, tempColorB, tempColorR, tempColorG);  }
      }

void ti_(uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG){
  for(int i = 34; i < 38; i++){
    matrix_SK6812.setPixelColor(i, tempColorB, tempColorR, tempColorG);  }
      }

void fem_(uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG){
  for(int i = 38; i < 44; i++){
    matrix_SK6812.setPixelColor(i, tempColorB, tempColorR, tempColorG);  }
      }

void paa_(uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG) {
  for (int i = 8; i < 12; i++) {
    matrix_SK6812.setPixelColor(i, tempColorB, tempColorR, tempColorG);
  }
     // P

}

void dot1(uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG) {
  for (int i = 3; i < 4; i++) {
    matrix_SK6812.setPixelColor(i, tempColorB, tempColorR, tempColorG);
  }
  
}

void dot2(uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG) {
  for (int i = 2; i < 3; i++) {
    matrix_SK6812.setPixelColor(i, tempColorB, tempColorR, tempColorG);
  }
  
}

void dot3(uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG) {
  for (int i = 1; i < 2; i++) {
    matrix_SK6812.setPixelColor(i, tempColorB, tempColorR, tempColorG);
  }
  
}

void dot4(uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG) {
  for (int i = 0; i < 1; i++) {
    matrix_SK6812.setPixelColor(i, tempColorB, tempColorR, tempColorG);
  }
  
}

void phobic(uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG) {
  for (int i = 22; i < 34; i++) {
    matrix_SK6812.setPixelColor(i, tempColorB, tempColorR, tempColorG);
  }
  
}
