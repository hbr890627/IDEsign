int powerPin=3;
void setup() {
  pinMode(powerPin,OUTPUT);
}

void loop() {
  if(Serial.available()){
    if(Serial.read()==1){
      digitalWrite(powerPin,HIGH);
    }else if(Serial.read()==0){
      digitalWrite(powerPin,LOW);
    }
  }
}
