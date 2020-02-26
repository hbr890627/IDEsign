int lightpin=14;
int light;
int R,R2;
int G,G2;
int B,B2;
void setup() {
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  analogWrite(9,200);
  delay(10);
  R=analogRead(lightpin);
  delay(10);
  analogWrite(9,0);
  
  
  analogWrite(10,100);
  delay(10);
  G=analogRead(lightpin);
  delay(10);
  analogWrite(10,0);
  
  analogWrite(11,200);
  delay(10);
  B=analogRead(lightpin);
  delay(10);
  analogWrite(11,0);

  
  Serial.print(map(1023-B,0,1023,0,255));
  Serial.print(" , ");
  //Serial.println(1023-R);
  Serial.print(map(1023-R,0,1023,0,255));
  Serial.print(" , ");
  //Serial.println(1023-G);
  Serial.println(map(1023-G,0,1023,0,255));
  
  //Serial.println(1023-B);

  delay(1);
  }
