void setup() {
  Serial.begin(9600);
}

void loop() {
  for(int i=0;i<10;i++){
    Serial.print("i=");
    Serial.println(i);
  }

  delay(1000);

  int x=0;
  while(x<10){
    Serial.print("x=");
    Serial.println(x);
    x++;
  }

  delay(5000);
}
