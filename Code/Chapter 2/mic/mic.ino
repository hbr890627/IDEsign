void setup(){
  Serial.begin(9600);
  pinMode(A0,INPUT);
}

int miv_pre, mic, b;

void loop(){
  mic=analogRead(A0);
  b += abs(mic - mic_pre);
  Serial.print(mic-500);
  Serial.print(",");
  Serial.println(b);
  b *=0.9;
  mic_pre=mic;
}
