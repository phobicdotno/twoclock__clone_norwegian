void loop() {
  cls();
    DateTime now = rtc.now();
    hours = now.hour();
    minutes = now.minute();
    timeUnix = now.unixtime();
    Serial.print(timeUnix);
    Serial.print(" - ");
    Serial.print(hours);
    Serial.print(":");
    Serial.println(minutes);
  
    Minutes(minutes);
    Hours(minutes, hours);
  
  
    delay(5000);
//  testText();
} // loop
