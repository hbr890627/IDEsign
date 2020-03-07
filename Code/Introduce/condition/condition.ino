int a=1;
int b=2;
int c=3;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if(a==1){
    Serial.println("a等於1");
  }
  if(a==2){
    Serial.println("a等於2");
  }else{
    Serial.println("a不等於2");
  }
  if(b!=3){
    Serial.println("b不等於3");
  }
  if(a<b){
    Serial.println("a小於b");
  }
  if(b>=a&&b<=c){
    Serial.println("b在a和c之間");
  }
  if(a==1||b==1){
    Serial.println("a或b一定有一個等於1");
  }
  delay(10000);
}
