#include "MIC.h"

void setup(){
  Serial.begin(9600);
  pinMode(A0,INPUT);
}
int mic_pin=14;

void loop(){
  Serial.println(mic_sensor(mic_pin));
}
