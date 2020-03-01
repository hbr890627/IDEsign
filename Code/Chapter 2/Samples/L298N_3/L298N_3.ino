int IN1=5;
int IN2=6;
int buttonState;
int buttonPin=7;
int mode=0; //0是停止 1是轉動

void setup() {
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
}
void Start(){
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
}
void Stop(){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
}
void loop() {
  buttonState=digitalRead(buttonPin);
  if(buttonState==HIGH){//當按鈕按下
    if(mode==0){//如果是停止的
      Start();//開始動
      mode=1;
      delay(500);
    }else{//如果在轉動
      Stop();//停下
      mode=0;
      delay(500);
    }
  }
}
