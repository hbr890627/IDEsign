void function1(){
  Serial.println("it is function1");
}
void function2(int p1){
  Serial.print("it is function2, has a parameter p1, its value is ");
  Serial.println(p1);
}
void function3(int p1,int p2){
  Serial.print("it is function3, has parameters p1 and p2, 兩者相加為:");
  Serial.println(p1+p2);
}
int function4(int p1,int p2){
  Serial.print("it is function4, 會回傳一個整數");
  return p1+p2;
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  function1();
  function2(123);
  function3(4,5);
  
  int abc=function4(7,8);
  Serial.print("變數abc得到了一個回傳值:");
  Serial.println(abc);
}
