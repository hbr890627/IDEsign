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
    if(Rstate==0){  //如果R按鈕狀態是off
      Rstate=1; //狀態變為on
      value+=10; //亮度加10
      if(value>=50){ //避免太亮
         value=50; 
      }
    }
  }else{ //如果放開右邊按鈕
    Rstate=0; //R按鈕狀態變為off
  }

  //左邊按鈕
  if(digitalRead(LPin)==HIGH){
    if(Lstate==0){
      value-=10;
      if(value<=0){
        value=0; 
      }
      Lstate=1;
    }
  }else{
    Lstate=0;
  }
  
  Serial.println(value);
}
