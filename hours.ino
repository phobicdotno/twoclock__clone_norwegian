void Hours(int minutes, int hours, uint16_t tempColorB, uint16_t tempColorR, uint16_t tempColorG) {
  if (hours > 12)       // Change 24-hour system to 12-hours 
  {
    hours = hours-12;
  }
  if (hours == 1) {
      if (minutes < 17 ) {
      ett(tempColorB, tempColorR, tempColorG);//   Serial.println("Mindre enn tretti");
    }
    else {
      to(tempColorB, tempColorR, tempColorG);//  Serial.println("Mer enn tretti");
    }
  } // if
  if (hours == 2) { if (minutes < 17 ) { to(tempColorB, tempColorR, tempColorG); }  else { tre(tempColorB, tempColorR, tempColorG); }}
  if (hours == 3) { if (minutes < 17 ) { tre(tempColorB, tempColorR, tempColorG); }  else { fire(tempColorB, tempColorR, tempColorG); }}
  if (hours == 4) { if (minutes < 17 ) { fire(tempColorB, tempColorR, tempColorG); }  else { fem(tempColorB, tempColorR, tempColorG); }}
  if (hours == 5) { if (minutes < 17 ) { fem(tempColorB, tempColorR, tempColorG); }  else { seks(tempColorB, tempColorR, tempColorG); }}
  if (hours == 6) { if (minutes < 17 ) { seks(tempColorB, tempColorR, tempColorG); }  else { sju(tempColorB, tempColorR, tempColorG); }}
  if (hours == 7) { if (minutes < 17 ) { sju(tempColorB, tempColorR, tempColorG); }  else { aatte(tempColorB, tempColorR, tempColorG); }}
  if (hours == 8) { if (minutes < 17 ) { aatte(tempColorB, tempColorR, tempColorG); }  else { ni(tempColorB, tempColorR, tempColorG); }}
  if (hours == 9) { if (minutes < 17 ) { ni(tempColorB, tempColorR, tempColorG); }  else { ti(tempColorB, tempColorR, tempColorG); }}
  if (hours == 10) { if (minutes < 17 ) { ti(tempColorB, tempColorR, tempColorG); }  else { elleve(tempColorB, tempColorR, tempColorG); }}
  if (hours == 11) { if (minutes < 17 ) { elleve(tempColorB, tempColorR, tempColorG); }  else { tolv(tempColorB, tempColorR, tempColorG); }}
  if (hours == 12 || hours == 0) { if (minutes < 17 ) { tolv(tempColorB, tempColorR, tempColorG); }  else { ett(tempColorB, tempColorR, tempColorG); }}
}
