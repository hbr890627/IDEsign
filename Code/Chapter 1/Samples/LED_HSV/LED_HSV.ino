#include "HSV.h"

//宣告腳位
int rPin = 11;
int gPin = 10;
int bPin = 9;

void setup() {
  setRedPin(rPin);  //設定R腳位
  setGreenPin(gPin);//設定G腳位
  setBluePin(bPin); //設定B腳位
}

void loop() {
  hue=360;      //H值 0~360度色盤
  saturation=1; //S值 飽和度
  value=1;      //V值 明度
  setColor( hue, saturation, value); //使用此行程式碼來更改顏色
}
