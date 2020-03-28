#include "RGBsensor.h"
int red_pin=3;
int green_pin=5;
int blue_pin=6;
int sensor_pin=A0;
String color;
void setup(){
  Serial.begin(9600);
  pinMode(red_pin,OUTPUT);
  pinMode(green_pin,OUTPUT);
  pinMode(blue_pin,OUTPUT);
  pinMode(sensor_pin,INPUT);
}
char a='0';

void loop(){
  color=RGBsensor(red_pin,green_pin,blue_pin,sensor_pin);
  if(Serial.available()>0){
    a=Serial.read();
    if(a=='1'){
      Serial.println(color);
    }
  }
  a='0';
}
