// MINUTES

void Minutes(int minutes, uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG) {
  if (minutes == 59 || minutes == 0 || minutes == 1 || minutes == 2) {
    Serial.println("Hel");
    }

  if (minutes > 3 && minutes <= 7) {
    fem_(tempColorB, tempColorR, tempColorG); over_(tempColorB, tempColorR, tempColorG);   Serial.println("Ca fem over");
    }

  if (minutes > 7 && minutes <= 13) {
    ti_(tempColorB, tempColorR, tempColorG); over_(tempColorB, tempColorR, tempColorG);   Serial.println("Ca ti over");
    }

  if (minutes > 13 && minutes <= 18) {
    kvart_(tempColorB, tempColorR, tempColorG); over_(tempColorB, tempColorR, tempColorG);   Serial.println("Ca kvart over");
    }

  if (minutes > 18 && minutes <= 23) {
    ti_(tempColorB, tempColorR, tempColorG); paa_(tempColorB, tempColorR, tempColorG); halv_(tempColorB, tempColorR, tempColorG);  Serial.println("Ca ti på halv");
    }

  if (minutes > 23 && minutes <= 28) {
    fem_(tempColorB, tempColorR, tempColorG); paa_(tempColorB, tempColorR, tempColorG); halv_(tempColorB, tempColorR, tempColorG);  Serial.println("Ca 5 på halv");
    }

  if (minutes > 28 && minutes <= 33) {
    halv_(tempColorB, tempColorR, tempColorG);   Serial.println("Ca halv");
    }

  if (minutes > 33 && minutes <= 38) {
    fem_(tempColorB, tempColorR, tempColorG); over_(tempColorB, tempColorR, tempColorG); halv_(tempColorB, tempColorR, tempColorG);  Serial.println("Ca fem over halv");
    }

  if (minutes > 38 && minutes <= 43) {
    ti_(tempColorB, tempColorR, tempColorG); over_(tempColorB, tempColorR, tempColorG); halv_(tempColorB, tempColorR, tempColorG);  Serial.println("Ca ti over halv");
    }

  if (minutes > 43 && minutes <= 48) {
    kvart_(tempColorB, tempColorR, tempColorG); paa_(tempColorB, tempColorR, tempColorG);  Serial.println("Ca kvart på");
    }

  if (minutes > 48 && minutes <= 53) {
    ti_(tempColorB, tempColorR, tempColorG); paa_(tempColorB, tempColorR, tempColorG);  Serial.println("Ca ti på");
    }

  if (minutes > 53 && minutes <= 58) {
    fem_(tempColorB, tempColorR, tempColorG); paa_(tempColorB, tempColorR, tempColorG);  Serial.println("Ca fem på");
    }
}
