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
  
  for (int i=0; i<12; i++){
    tempColor = RGB_RANDOM();
    for (int j=0; j<12; j++){
      cls();
      Minutes(minutes, tempColor);
      Hours(minutes, hours, tempColor);
      matrix_ws2812b.show();
      matrix_SK6812.show();
      
      delay(delayTime);
      Serial.print(hours);
      Serial.print(":");
      Serial.println(minutes);
      minutes+=5;
    }
    hours++;
    minutes = 0;
    
  }
}
  


void testText() {
  phobic(tempColor);
  showBoth();
  delay(2000);
  cls();

  ett(tempColor);
  showBoth();
  delay(delayTime);
  cls();;

  to(tempColor);
  showBoth();
  delay(delayTime);
  cls();;

  tre(tempColor);  // Mangler E
  showBoth();
  delay(delayTime);
  cls();;

  fire(tempColor);
  showBoth();
  delay(delayTime);
  cls();

  fem(tempColor);
  showBoth();
  delay(delayTime);
  cls();

  seks(tempColor);
  showBoth();
  delay(delayTime);
  cls();

  sju(tempColor);
  showBoth();
  delay(delayTime);
  cls();

  aatte(tempColor);
  showBoth();
  delay(delayTime);
  cls();

  ni(tempColor);
  showBoth();
  delay(delayTime);
  cls();

  ti(tempColor);
  showBoth();
  delay(delayTime);
  cls();

  elleve(tempColor); // Mangler første E
  showBoth();
  delay(delayTime);
  cls();

  tolv(tempColor);
  showBoth();
  delay(delayTime);
  cls();

  fem_(tempColor);
  showBoth();
  delay(delayTime);
  cls();

  ti_(tempColor);
  showBoth();
  delay(delayTime);
  cls();

  kvart_(tempColor);
  showBoth();
  delay(delayTime);
  cls();

  paa_(tempColor);
  showBoth();
  delay(delayTime);
  cls();

  over_(tempColor);
  showBoth();
  delay(delayTime);
  cls();

  halv_(tempColor);
  showBoth();
  delay(delayTime);
  cls();

  dot1(tempColor);
  showBoth();
  delay(delayTime);
  cls();

  dot2(tempColor);
  showBoth();
  delay(delayTime);
  cls();

  dot3(tempColor);
  showBoth();
  delay(delayTime);
  cls();

  dot4(tempColor);
  showBoth();
  delay(delayTime);
  cls();
}
