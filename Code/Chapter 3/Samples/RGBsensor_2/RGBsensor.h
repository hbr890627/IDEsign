double r,r_pre,ro;
double g,g_pre,go;
double b,b_pre,bo;
int light;
double roo,goo,boo;
double lightoo;
String RGBsensor(int rpin,int gpin,int bpin,int spin){
  //RED
  analogWrite(rpin,80);
  delay(10);
  r=analogRead(spin)*0.2+r*0.8;
  delay(10);
  analogWrite(rpin,0);
  
  //GREEN
  analogWrite(gpin,80);
  delay(10);
  g=analogRead(spin)*0.2+g*0.8;
  delay(10);
  analogWrite(gpin,0);
  
  //BLUE
  analogWrite(bpin,70);
  delay(10);
  b=analogRead(spin)*0.2+b*0.8;
  delay(10);
  analogWrite(bpin,0);
  
  delay(10);
  light=analogRead(spin)*0.2+light*0.8;
  ro=0.9*map(light-r,0,1023,0,4000);
  go=1.3*map(light-g,0,1023,0,4000)-350;
  bo=map(light-b,0,1023,0,4000)-150;
  roo=double(ro/(ro+go+bo))*10000;
  goo=double(go/(ro+go+bo))*10000;
  boo=double(bo/(ro+go+bo))*10000;
  lightoo=map(1023-light,0,1023,0,1023);
  /*
  Serial.print(map(1023-light,0,1023,0,1023));
  Serial.print(" , ");
  Serial.print(roo);
  Serial.print(" , ");
  Serial.print(goo);
  Serial.print(" , ");
  Serial.println(boo);
  */
  delay(1);
  
  if(roo>4400 && g<3200 && b<2500){
    return("紅色");
  } if(4000<roo && 4400>roo && 3300<goo && 3600>goo && boo<2500){
    return("橘色");
  } if(3600<roo && 4100>roo && 3550<goo && 3900>goo && boo<2600){
    return("黃色");
  } if(3200>roo &&  3850<goo && boo < 3200){
    return("綠色");
  } if(roo<3200 && goo<3300 && boo> 4100){
    return("藍色");
  } if(3300<roo && 4000>roo && 3200> goo && 3300<boo && boo<4000){
    return("紫色");
  }
  if(lightoo<650){
    return("黑色");
  }if(lightoo>760 && roo>300 && goo>300 && boo>300){
    return("白色");
  }
  if(true){
    return("e04");
  } 
}
