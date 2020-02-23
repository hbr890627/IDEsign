int micA=3;
int micD=4;
int value;


void setup() {
  pinMode(micA,OUTPUT);
  pinMode(micD,OUTPUT);
}

void loop() {
  value=analogRead(micA);
  if(value>500){
    digitalWrite(13,HIGH); 
  }else{
    digitalWrite(13,LOW);
  }
  
  if(digitalRead(micD==HIGH)){
    digitalWrite(13,HIGH);
  }else{
    digitalWrite(13,LOW);
  }
}
