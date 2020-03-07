int turnOn;

void setup() {
  pinMode(13,OUTPUT);
  turnOn=true;
  //turnOn=false;
}

void loop() {
  
  if(turnOn){
    digitalWrite(13,HIGH);
  }else if(!turnOn){
    digitalWrite(13,LOW);
  }
}
