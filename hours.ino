void Hours(int minutes, int hours) {
  if (hours > 12)       // Change 24-hour system to 12-hours 
  {
    hours = hours-12;
  }
  if (hours == 1) {
      if (minutes < 17 ) {
      ett(100,100,100);//   Serial.println("Mindre enn tretti");
    }
    else {
      to();//  Serial.println("Mer enn tretti");
    }
  } // if
  if (hours == 2) { if (minutes < 17 ) { to(); }  else { tre(); }}
  if (hours == 3) { if (minutes < 17 ) { tre(); }  else { fire(); }}
  if (hours == 4) { if (minutes < 17 ) { fire(); }  else { fem(); }}
  if (hours == 5) { if (minutes < 17 ) { fem(); }  else { seks(); }}
  if (hours == 6) { if (minutes < 17 ) { seks(); }  else { sju(); }}
  if (hours == 7) { if (minutes < 17 ) { sju(); }  else { aatte(); }}
  if (hours == 8) { if (minutes < 17 ) { aatte(); }  else { ni(); }}
  if (hours == 9) { if (minutes < 17 ) { ni(); }  else { ti(); }}
  if (hours == 10) { if (minutes < 17 ) { ti(); }  else { elleve(); }}
  if (hours == 11) { if (minutes < 17 ) { elleve(); }  else { tolv(); }}
  if (hours == 12 || hours == 0) { if (minutes < 17 ) { tolv(); }  else { ett(100,100,100); }}
}
