#include "MIC.h"

int mic_pin=A0;
int sound;
int led=5;
int value;

void setup(){
  Serial.begin(9600);
  pinMode(mic_pin,INPUT);
  pinMode(led,OUTPUT);
}

void loop(){
  sound=mic_sensor(mic_pin);
  value=map(sound,0,1023,0,255);
  analogWrite(led,value);
  Serial.println(value);
}
