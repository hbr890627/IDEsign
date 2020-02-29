int AnalogOut=A0;
int light1;
int light2;

void setup() {
  Serial.begin(9600);
}

void loop() {
  light1=analogRead(AnalogOut);
  light2=light2*0.9+light1*0.1;
  Serial.println(light2);
}
