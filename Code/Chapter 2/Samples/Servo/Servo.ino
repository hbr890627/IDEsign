#include <Servo.h>  //使arduino看懂有關servo的程式碼
Servo myservo;  //創造一個叫myservo的物件

int angle=0;

void setup() {
  myservo.attach(9);  //讓9號腳位作為控制myservo的物件
}
void loop() {
  for(int i=0;i<180;i++){
    angle=i;
    myservo.write(angle);  //告訴myservo要轉到哪個角度
    delay(15);  //以防馬達還沒轉好就開始執行下一程式碼 
  }
  for(int i=180;i>0;i--){
    angle=i;
    myservo.write(angle);  //告訴myservo要轉到哪個角度
    delay(15);  //以防馬達還沒轉好就開始執行下一程式碼 
  }                 
}
