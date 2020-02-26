int IN1=4;
int IN2=5;
int IN3=6;
int IN4=7;
int ENA=9;
int ENB=10;
int power=0;
int state=1;

void A_motor(){
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
}
void B_motor(){
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
}

void setup() {
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  A_motor();
  B_motor();
}

void loop() {
  if(state==1){//加速模式
    power+=1;
    if(power>200){
      state=0;
    }
  }else if(state==0){//減速模式
    power-=1;
    if(power<10){
      state=1;
    }
  }
  delay(10);
  analogWrite(ENA,power);
  analogWrite(ENB,power);
}
