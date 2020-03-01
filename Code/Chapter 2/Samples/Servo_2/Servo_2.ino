#include <Servo.h>  //使arduino看懂有關servo的程式碼
Servo myservo;  //創造一個叫myservo的物件

int Read;
int angle=0;

void setup() {
  myservo.attach(9);  //讓9號腳位作為控制myservo的物件
}
void loop() {
  Read=analogRead(A0);
  angle=map(Read,0,1023,0,180);
  myservo.write(angle);
  delay(10);          
}
