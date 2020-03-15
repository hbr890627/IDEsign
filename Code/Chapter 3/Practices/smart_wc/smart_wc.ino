int trig=6;
int echo=7;
int mp3power=4;
int led=3;
int photoPin=A0;
int SensorOut;
int light;
long distance;

void setup() {
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(mp3power,OUTPUT);
  pinMode(led,OUTPUT);
}

long get_distance() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  return pulseIn(echo, HIGH)*0.035/2;
}

void loop() {
  distance=get_distance();
  SensorOut=analogRead(photoPin);
  light=map(SensorOut,0,1023,0,255);
  
  if(distance<50){
    digitalWrite(mp3power,HIGH);
    if(light>50){
      light=map(light,50,200,0,255);
    }else{
      light=0;
    }
    analogWrite(led,light);
    
  }else{
    digitalWrite(mp3power,LOW);
    digitalWrite(led,LOW);
  }
  
  Serial.println(light);
  delay(10);
}
