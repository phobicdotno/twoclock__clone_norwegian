void loop() {
  cls();
  timeLoop();
  //fem_();
  //over_();
 // halv_();
 //phobic();
  
//  cycleTimeTest(1000);
//  testText();
  showBoth();
  delay(1000);
} // loop

void timeLoop(){
      DateTime now = rtc.now();
    hours = now.hour();
    minutes = now.minute();
//    timeUnix = now.unixtime();
//    Serial.print(timeUnix);
    tempColorB = randomHat();
    tempColorR = randomHat();
    tempColorG = randomHat();
    //RGB_RANDOM();
    Serial.print(tempColorB, HEX);
    Serial.print(tempColorR, HEX);
    Serial.println(tempColorG, HEX);
   
    Minutes(minutes, tempColorB, tempColorR, tempColorG);
    Hours(minutes, hours, tempColorB, tempColorR, tempColorG);
    Serial.print(hours);
    Serial.print(":");
    Serial.println(minutes);
}
void cls() {
  matrix_ws2812b.clear();
  matrix_SK6812.clear();
}

void showBoth(){
  matrix_ws2812b.show();
  matrix_SK6812.show();
}
