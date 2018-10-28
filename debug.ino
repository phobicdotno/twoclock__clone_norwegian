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
      matrix_ws2812b.show();
      matrix_SK6812.show();
      
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
  matrix_SK6812.clear();
}

void showBoth(){
  matrix_ws2812b.show();
  matrix_SK6812.show();
}

void testText() {
  phobic();
  showBoth();
  delay(2000);
  cls();

  ett();
  showBoth();
  delay(delayTime);
  cls();;

  to();
  showBoth();
  delay(delayTime);
  cls();;

  tre();  // Mangler E
  showBoth();
  delay(delayTime);
  cls();;

  fire();
  showBoth();
  delay(delayTime);
  cls();

  fem();
  showBoth();
  delay(delayTime);
  cls();

  seks();
  showBoth();
  delay(delayTime);
  cls();

  sju();
  showBoth();
  delay(delayTime);
  cls();

  aatte();
  showBoth();
  delay(delayTime);
  cls();

  ni();
  showBoth();
  delay(delayTime);
  cls();

  ti();
  showBoth();
  delay(delayTime);
  cls();

  elleve(); // Mangler første E
  showBoth();
  delay(delayTime);
  cls();

  tolv();
  showBoth();
  delay(delayTime);
  cls();

  fem_();
  showBoth();
  delay(delayTime);
  cls();

  ti_();
  showBoth();
  delay(delayTime);
  cls();

  kvart_();
  showBoth();
  delay(delayTime);
  cls();

  paa_();
  showBoth();
  delay(delayTime);
  cls();

  over_();
  showBoth();
  delay(delayTime);
  cls();

  halv_();
  showBoth();
  delay(delayTime);
  cls();

  dot1();
  showBoth();
  delay(delayTime);
  cls();

  dot2();
  showBoth();
  delay(delayTime);
  cls();

  dot3();
  showBoth();
  delay(delayTime);
  cls();

  dot4();
  showBoth();
  delay(delayTime);
  cls();
}
