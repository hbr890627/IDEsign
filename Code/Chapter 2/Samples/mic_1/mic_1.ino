#include "MIC.h"  //引入標頭檔

int mic_pin=A0; 
int sound; //聲音大小

void setup(){
  Serial.begin(9600);
  pinMode(mic_pin,INPUT);
}

void loop(){
  /*
  mic_sensor( 某腳位 );
  這個函數會將收到的聲音大小用類比訊號回傳給某腳位
  */
  sound=mic_sensor(mic_pin);
  Serial.println(sound);
}
