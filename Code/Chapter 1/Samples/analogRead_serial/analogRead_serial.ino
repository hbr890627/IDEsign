int Read;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Read=analogRead(A0);
  Serial.println(Read);
}
