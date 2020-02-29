int redPin = 11;
int greenPin = 10;
int bluePin = 9;

int light;//亮度

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}
void loop() {
  light=20;//設定亮度
  analogWrite(redPin,light);
  delay(1000);
  analogWrite(greenPin,light);
  delay(1000);
  analogWrite(bluePin,light);
  delay(1000);
  
  light=150;//調亮
  analogWrite(redPin,light);
  delay(1000);
  analogWrite(greenPin,light);
  delay(1000);
  analogWrite(bluePin,light);
  delay(1000);
}
