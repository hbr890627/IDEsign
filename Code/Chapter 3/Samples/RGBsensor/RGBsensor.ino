int Rpin=3;
int Gpin=5;
int Bpin=6;
int SensorPin=A0;

int Rlight1,Rlight2;
int Glight1,Glight2;
int Blight1,Blight2;
int Environmentlight1,Environmentlight2;

void setup() {
  Serial.begin(9600);
  pinMode(Rpin,OUTPUT);
  pinMode(Gpin,OUTPUT);
  pinMode(Bpin,OUTPUT);
}

void loop() {
  Rlight1=GetLight(Rpin);
  Glight1=GetLight(Gpin);
  Blight1=GetLight(Bpin);
  Environmentlight1=GetLight(0);

  Rlight2=Rlight1*0.1+Rlight2*0.9;
  Glight2=Glight1*0.1+Glight2*0.9;
  Blight2=Blight1*0.1+Blight2*0.9;
  Environmentlight2=Environmentlight1*0.1+Environmentlight2*0.9;
  
  Serial.print(Blight2);
  Serial.print(",");
  Serial.print(Rlight2);
  Serial.print(",");
  Serial.print(Glight2);
  Serial.print(",");
  Serial.println(Environmentlight2);
}

int GetLight(int pin){
  analogWrite(pin,5);
  delay(10);
  int light=analogRead(SensorPin);
  delay(10);
  analogWrite(pin,0);
  return light;
}
