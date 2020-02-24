#include "HSV.h"

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  hue=360;      //H值 0~360度色盤
  saturation=1; //S值 飽和度
  value=1;      //V值 明度
  setColor( hue, saturation, value);
  /* //呼吸燈
  delay(50);
  hue += 10;
  if (hue >= 360) hue = 0.0;*/
}
