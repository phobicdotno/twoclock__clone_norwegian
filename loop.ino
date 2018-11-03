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
    tempColor = RGB_RANDOM();
    tempColorB = RGB_RANDOM();
    tempColorR = RGB_RANDOM();
    tempColorG = RGB_RANDOM();
    Serial.println(tempColor, HEX);
    Minutes(minutes, tempColor);
    Hours(minutes, hours, tempColor);
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
