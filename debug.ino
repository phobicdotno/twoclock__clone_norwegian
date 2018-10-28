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

void cycleTimeTest() {
  // Loop debug should be here. 
  // Need to find out how to reach
  // Hours/Minutes functions from 
  // inside this function
  minutes = 0;
  hours = 0;
  delay(500);
  Serial.print(hours);
  Serial.print(":");
  Serial.println(minutes);
  
  for (int i=0; i<12; i++){
    delay(1000);
    for (int j=0; j<11; j++){
      cls();
      Minutes(minutes);
      Hours(minutes, hours);
      delay(1000);
      Serial.print(hours);
      Serial.print(":");
      Serial.println(minutes);
      minutes+=5;
    }
    hours++;
    minutes = 0;
    
  }
}
  

void cls() {
  matrix_ws2812b.clear();
  matrix_ws2812b.show();
  matrix_SK6812.clear();
  matrix_SK6812.show();  
}

void testText() {
  ett();
  delay(delayTime);
  cls();;

  to();
  delay(delayTime);
  cls();;

  tre();  // Mangler E
  delay(delayTime);
  cls();;

  fire();
  delay(delayTime);
  cls();

  fem();
  delay(delayTime);
  cls();

  seks();
  delay(delayTime);
  cls();

  sju();
  delay(delayTime);
  cls();

  aatte();
  delay(delayTime);
  cls();

  ni();
  delay(delayTime);
  cls();

  ti();
  delay(delayTime);
  cls();

  elleve(); // Mangler første E
  delay(delayTime);
  cls();

  tolv();
  delay(delayTime);
  cls();

  fem_();
  delay(delayTime);
  cls();

  ti_();
  delay(delayTime);
  cls();

  kvart_();
  delay(delayTime);
  cls();

  halv_();
  delay(delayTime);
  cls();

  over_();
  delay(delayTime);
  cls();

  paa_();
  delay(delayTime);
  cls();

  dot1();
  delay(delayTime);
  cls();

  dot2();
  delay(delayTime);
  cls();

  dot3();
  delay(delayTime);
  cls();

  dot4();
  delay(delayTime);
  cls();
}
