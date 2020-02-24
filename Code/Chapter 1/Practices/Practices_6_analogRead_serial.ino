int read;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  read=analogRead(A0);
  Serial.println(read);
}
