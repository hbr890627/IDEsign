//宣告腳位
int LPin=3;
int RPin=2;
int LEDPin=5;

int value=0; //亮度
int Rstate=0; //右邊按鈕狀態
int Lstate=0; //左邊按鈕狀態

void setup(){
  pinMode(LEDPin, OUTPUT);
  pinMode(LPin, INPUT);
  pinMode(RPin, INPUT);
  Serial.begin(9600);
}
void loop(){
  analogWrite(LEDPin,value); //使LED燈亮起

  //右邊按鈕
  if(digitalRead(RPin)==HIGH){  //如果按下右邊按鈕
    value+=10;
    if(value>=200){
      value=200;
    }
  }

  //左邊按鈕
  if(digitalRead(LPin)==HIGH){
    value-=10;
    if(value<=0){
      value=0;
    }
  }
  delay(200);
  
  Serial.println(value);
}
