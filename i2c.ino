byte convert_unsigned_long_to_bytes(unsigned long uLong)
{  
  byte buf[4];
  buf[0] = uLong & 255;
  buf[1] = (uLong >> 8)  & 255;
  buf[2] = (uLong >> 16) & 255;
  buf[3] = (uLong >> 24) & 255;
  return buf;
}

void requestEvent() {
  Wire.write(hours); // respond with message of 1 bytes
  Wire.write(minutes); // respond with message of 1 bytes
  // as expected by master
}
