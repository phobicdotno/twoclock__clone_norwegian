/*
  // DEBUG: Serial output for current time
    Serial.print(now.hour(), DEC);
    Serial.print(':');
    Serial.print(now.minute(), DEC);
    Serial.print(':');
    Serial.print(now.second(), DEC);
    Serial.println();
*/
/*
  // DEBUG: Loop fast through 12 hours cycle
    for (int j = 1 ; j < 13; j++){
     for (int i = 1 ; i < 60; i+=5){
       matrix.fillScreen(0);
       delay(1000);
       Hours(i, j);
       Minutes(i);
      Serial.print(j);
      Serial.print(":");
      Serial.println(i);

       matrix.show();
     }
    }
*/

void cycleTimeTest(int delayTime) {
  minutes = 0;
  hours = 0;
  delay(delayTime);
  Serial.print(hours);
  Serial.print(":");
  Serial.println(minutes);

  for (int i = 0; i < 12; i++) {
//    tempColorB = RGB_RANDOM();
//    tempColorR = RGB_RANDOM();
//    tempColorG = RGB_RANDOM();
      RGB_RANDOM();
    for (int j = 0; j < 12; j++) {
      cls();
      Minutes(minutes, tempColorB, tempColorR, tempColorG);
      Hours(minutes, hours, tempColorB, tempColorR, tempColorG);
      matrix_ws2812b.show();
      matrix_SK6812.show();

      delay(delayTime);
      Serial.print(hours);
      Serial.print(":");
      Serial.println(minutes);
      minutes += 5;
    }
    hours++;
    minutes = 0;

  }
}



void testText() {
  phobic(tempColorB, tempColorR, tempColorG);
  showBoth();
  delay(2000);
  cls();

  ett(tempColorB, tempColorR, tempColorG);
  showBoth();
  delay(delayTime);
  cls();;

  to(tempColorB, tempColorR, tempColorG);
  showBoth();
  delay(delayTime);
  cls();;

  tre(tempColorB, tempColorR, tempColorG);  // Mangler E
  showBoth();
  delay(delayTime);
  cls();;

  fire(tempColorB, tempColorR, tempColorG);
  showBoth();
  delay(delayTime);
  cls();

  fem(tempColorB, tempColorR, tempColorG);
  showBoth();
  delay(delayTime);
  cls();

  seks(tempColorB, tempColorR, tempColorG);
  showBoth();
  delay(delayTime);
  cls();

  sju(tempColorB, tempColorR, tempColorG);
  showBoth();
  delay(delayTime);
  cls();

  aatte(tempColorB, tempColorR, tempColorG);
  showBoth();
  delay(delayTime);
  cls();

  ni(tempColorB, tempColorR, tempColorG);
  showBoth();
  delay(delayTime);
  cls();

  ti(tempColorB, tempColorR, tempColorG);
  showBoth();
  delay(delayTime);
  cls();

  elleve(tempColorB, tempColorR, tempColorG); // Mangler første E
  showBoth();
  delay(delayTime);
  cls();

  tolv(tempColorB, tempColorR, tempColorG);
  showBoth();
  delay(delayTime);
  cls();

  fem_(tempColorB, tempColorR, tempColorG);
  showBoth();
  delay(delayTime);
  cls();

  ti_(tempColorB, tempColorR, tempColorG);
  showBoth();
  delay(delayTime);
  cls();

  kvart_(tempColorB, tempColorR, tempColorG);
  showBoth();
  delay(delayTime);
  cls();

  paa_(tempColorB, tempColorR, tempColorG);
  showBoth();
  delay(delayTime);
  cls();

  over_(tempColorB, tempColorR, tempColorG);
  showBoth();
  delay(delayTime);
  cls();

  halv_(tempColorB, tempColorR, tempColorG);
  showBoth();
  delay(delayTime);
  cls();

  dot1(tempColorB, tempColorR, tempColorG);
  showBoth();
  delay(delayTime);
  cls();

  dot2(tempColorB, tempColorR, tempColorG);
  showBoth();
  delay(delayTime);
  cls();

  dot3(tempColorB, tempColorR, tempColorG);
  showBoth();
  delay(delayTime);
  cls();

  dot4(tempColorB, tempColorR, tempColorG);
  showBoth();
  delay(delayTime);
  cls();
}
