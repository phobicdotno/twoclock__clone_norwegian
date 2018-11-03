void Hours(int minutes, int hours, uint16_t tempColor) {
  if (hours > 12)       // Change 24-hour system to 12-hours 
  {
    hours = hours-12;
  }
  if (hours == 1) {
      if (minutes < 17 ) {
      ett(tempColor);//   Serial.println("Mindre enn tretti");
    }
    else {
      to(tempColor);//  Serial.println("Mer enn tretti");
    }
  } // if
  if (hours == 2) { if (minutes < 17 ) { to(tempColor); }  else { tre(tempColor); }}
  if (hours == 3) { if (minutes < 17 ) { tre(tempColor); }  else { fire(tempColor); }}
  if (hours == 4) { if (minutes < 17 ) { fire(tempColor); }  else { fem(tempColor); }}
  if (hours == 5) { if (minutes < 17 ) { fem(tempColor); }  else { seks(tempColor); }}
  if (hours == 6) { if (minutes < 17 ) { seks(tempColor); }  else { sju(tempColor); }}
  if (hours == 7) { if (minutes < 17 ) { sju(tempColor); }  else { aatte(tempColor); }}
  if (hours == 8) { if (minutes < 17 ) { aatte(tempColor); }  else { ni(tempColor); }}
  if (hours == 9) { if (minutes < 17 ) { ni(tempColor); }  else { ti(tempColor); }}
  if (hours == 10) { if (minutes < 17 ) { ti(tempColor); }  else { elleve(tempColor); }}
  if (hours == 11) { if (minutes < 17 ) { elleve(tempColor); }  else { tolv(tempColor); }}
  if (hours == 12 || hours == 0) { if (minutes < 17 ) { tolv(tempColor); }  else { ett(tempColor); }}
}
