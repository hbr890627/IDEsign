#include <SoftwareSerial.h>

SoftwareSerial BTSerial(0,1); //RX/TX

int analogPin=14;


char a;
String b="";
int c;

bool re=false;

void Start(){
  
}

void Stop(){
  
}

void setup() { 
  BTSerial.begin(38400);
  Serial.begin(9600);
}

void loop(){
  if(BTSerial.available()>0){ //BTSerial
    a=BTSerial.read();
    b+=a;
    delay(5);
  }else{
    re=true;
  }
  if(BTSerial.available()==0&&re&&b!=""){ //BTSerial
    c=b.toInt();
    b="";
    Serial.println(c);

    if(c>=0&&c<=100){
      analogWrite(14,map(c,0,100,0,1023));
    }
    if(c>=200&&c<=210){
      
    }
    if(c==301){
      Start();
    }
    if(c==302){
      Stop();
    }

    re=false;
  }
  BTSerial.flush();
  delay(5);
}
