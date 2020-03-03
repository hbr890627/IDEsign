int PhotoresistorPin=A1;
int SensorOut;
int SensorOut2;
int led=3;
int light;

void setup() {
  Serial.begin(9600);
}

void loop() {
  SensorOut=analogRead(PhotoresistorPin);
  SensorOut2=map(SersorOut,0,1023,0,255);
  light=255-SersorOut2;
  analogWrite(led,light);
}
