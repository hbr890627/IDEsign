#include <SoftwareSerial.h> // 引用程式庫

// 定義連接藍牙模組的序列埠
SoftwareSerial BTSerial(10,11); //RX TX

void setup() {
  Serial.begin(9600);
  Serial.println("Enter AT commands");
  BTSerial.begin(38400);  //藍芽模組傳輸速度
}

void loop() {
  // 若收到藍牙模組的資料，則送到「序列埠監控視窗」
  if (BTSerial.available()){
    Serial.println(BTSerial.read());
  }
  // 若收到「序列埠監控視窗」的資料，則送到藍牙模組
  if (Serial.available()){
    BTSerial.write(Serial.read());
  }
  
}
