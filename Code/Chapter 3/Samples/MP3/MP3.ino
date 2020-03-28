int powerPin=4;
void setup() {
  Serial.begin(9600);
  pinMode(powerPin,OUTPUT);
}

void loop() {
  if(Serial.available()){
    char a=Serial.read();
    if(a=='1'){
      digitalWrite(powerPin,HIGH);
    }else if(a=='0'){
      digitalWrite(powerPin,LOW);
    }
  }
}
