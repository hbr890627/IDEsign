#include "MIC.h"

int in1=5;
int in2=6;
int in3=7;
int in4=8;
int ena=9;
int enb=10;
int mica=14;
int Speed;
int Read;

int sound;
int activeSound=50;
bool isMove=false;

bool hear(){
  sound=mic_sensor(mica);
  if(sound>activeSound){
    return true;
  }else{
    return false;
  }
}
void Start(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}
void Stop(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
}
void setup() {
  Serial.begin(9600);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
}
void loop() {
  Serial.println(Read);
  Read=analogRead(15);
  Speed=map(Read,0,1023,0,200);
  analogWrite(enb,Speed);
  analogWrite(ena,Speed);
  if(hear()){
    if(isMove){
      isMove=false;
      Stop();
    }else{
      isMove=true;
      Start();
    }
  }
}
