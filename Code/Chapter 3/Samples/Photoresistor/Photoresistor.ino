int PhotoresistorPin=A1;
int SensorOut;

void setup() {
  Serial.begin(9600);
}

void loop() {
  SensorOut=analogRead(PhotoresistorPin);
  Serial.println(SensorOut);
}
