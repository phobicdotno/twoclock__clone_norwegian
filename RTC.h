// Date and time functions using a DS3231 RTC connected via I2C and Wire lib
#include <Wire.h>
#include <RTClib.h>   // Realtime Clock
RTC_DS3231 rtc;

void setTimeDS3231(){
  delay(3000); // wait for console opening

  if (! rtc.begin()) {
    Serial.println("Couldn't find RTC");
    while (1);
  }
  //else {rtc.adjust(DateTime(2018, 9, 9, 1, 32, 0));}

  if (rtc.lostPower()) {    // Power cycle the arduino for this to kick in
    Serial.println("RTC lost power, lets set the time!");
    // following line sets the RTC to the date & time this sketch was compiled
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
    // This line sets the RTC with an explicit date & time, for example to set
    // January 21, 2014 at 3am you would call:
    //rtc.adjust(DateTime(2018, 8, 30, 21, 49, 0));
  }
}
 
