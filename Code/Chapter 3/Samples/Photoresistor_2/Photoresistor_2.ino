int PhotoresistorPin=A1;
int SensorOut;
int led=3;
int light;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  SensorOut=analogRead(PhotoresistorPin);
  light=map(SersorOut,0,1023,0,255);
  light=SersorOut;
  if(light<50){
    light=0;
  }else{
    light=map(light,50,200,0,255);
  }
  analogWrite(led,light);
  Serial.println(light);
}
