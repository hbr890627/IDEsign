int AnalogOut=A1;
int light;

void setup() {
  Serial.begin(9600);
}

void loop() {
  light=analogRead(AnalogOut);
  Serial.println(light);
}
