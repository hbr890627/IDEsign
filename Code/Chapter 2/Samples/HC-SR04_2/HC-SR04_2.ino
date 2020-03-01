int trig=12;
int echo=11;
int distance;
int IN1=5;
int IN2=6;

long get_distance() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  return pulseIn(echo, HIGH)*0.035/2;
}
void setup() {
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
}
void Start(){
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
}
void Stop(){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
}

void loop() {
  distance=get_distance();
  Serial.println(distance);
  if(distance<100){
    Start();
  }else{
    Stop();
  }
}
