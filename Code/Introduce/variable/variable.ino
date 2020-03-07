int a=10;
float b=0.123;
char c='a';
String d="hello"
bool e=true;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("a是整數，值為:");
  Serial.println(a);
  Serial.print("b是浮點數，值為:");
  Serial.println(b);
  Serial.print("c是字元，值為:");
  Serial.println(c);
  Serial.print("d是字串，值為:");
  Serial.println(d);
  Serial.print("e是布林值，值為:");
  Serial.println(e);
  delay(5000);
}
