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
//    Serial.print(" - ");
  
    Minutes(minutes);
    Hours(minutes, hours);
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
