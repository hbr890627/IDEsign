#include <SoftwareSerial.h>   // 引用程式庫
 
// 定義連接藍牙模組的序列埠
SoftwareSerial BT(8, 9); // 接收腳, 傳送腳
char a;
String b;  // 儲存接收資料的變數
int c;
int d=0;
int led=13;
 
void setup() {
  Serial.begin(9600);   // 與電腦序列埠連線
  //Serial.println("BT is ready!");
  BT.begin(38400);
  pinMode(led,OUTPUT);
}
 
void loop() {
  /*
  // 若收到「序列埠監控視窗」的資料，則送到藍牙模組
  if (Serial.available()) {
    //val=Serial.read();
    BT.write(Serial.read());
  }
  // 若收到藍牙模組的資料，則送到「序列埠監控視窗」
  if (BT.available()) {
    //val=BT.read();
    Serial.write(BT.read());
  }
  */
  if(BT.available()){
    a=BT.read();
    b+=a;
    d=1;
    
  }else{
    if(d==1){
      c=b.toInt();
      b=" ";
      Serial.println(c);
      d=0;
    }
  }

  if(c==1){
    digitalWrite(led,HIGH);
  }
  
  if(c==2){
    digitalWrite(led,LOW);
  }
}
