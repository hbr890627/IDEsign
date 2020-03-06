#include <SoftwareSerial.h>   // 引用程式庫
 
// 定義連接藍牙模組的序列埠
SoftwareSerial BT(10, 11); // 接收腳, 傳送腳

//處理接收到藍芽模組資料用變數
char a; String b; int c=0;

int data; //收到的數值
 
void setup() {
  Serial.begin(9600);
  BT.begin(38400);
}
 
void loop() {
  //處理接收到藍芽模組資料
  if(BT.available()){
    a=BT.read();
    b+=a;
    c=1;
  }else{
    if(c==1){
      data=b.toInt();
      b=" ";
      Serial.println(data);
      c=0;
    }
  }

  //your code can put under this comment


  //your code can put above this comment
  
  BT.flush();
  delay(1);
}
