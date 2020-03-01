int mic_pre, mic, b;
int mic_sensor(int pin){
  mic=analogRead(14);
  b += abs(mic - mic_pre);
  b *=0.9;
  mic_pre=mic;
  return(b);
}
