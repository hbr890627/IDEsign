<<<<<<< HEAD
=======

>>>>>>> 86f903891bebbbbd3ba7505d677e2be56ae2c1b8
int mic_pre, mic, b;
int mic_sensor(int pin){
  mic=analogRead(14);
  b += abs(mic - mic_pre);
  //Serial.print(mic-500);
  //Serial.print(",");
  //Serial.println(b);
  b *=0.9;
  mic_pre=mic;
  return(b);
}
