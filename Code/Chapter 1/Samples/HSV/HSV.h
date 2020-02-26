float col[3];
float hue = 0.0;
float saturation=0;
float value=0;

void setColor1(float *rgb) {
  analogWrite(redPin, ((1.0 - rgb[0]) * 255));
  analogWrite(greenPin, ((1.0 - rgb[1]) * 255));
  analogWrite(bluePin, ((1.0 - rgb[2]) * 255));  
}
float fract(float x) { return x - int(x); }
float mix(float a, float b, float t) { return a + (b - a) * t; }

float* hsv2rgb(float h, float s, float b, float* rgb) {
  rgb[0] = b * mix(1.0, constrain(abs(fract(h + 1.0) * 6.0 - 3.0) - 1.0, 0.0, 1.0), s);
  rgb[1] = b * mix(1.0, constrain(abs(fract(h + 0.6666666) * 6.0 - 3.0) - 1.0, 0.0, 1.0), s);
  rgb[2] = b * mix(1.0, constrain(abs(fract(h + 0.3333333) * 6.0 - 3.0) - 1.0, 0.0, 1.0), s);
  return rgb;
}
float Correction(float hue){//校正色域
  hue=hue+180;
  if(hue>=360){
    hue-=360;
  }
  return hue;
}
void setColor(float hue,float saturation,float value){
  setColor1(hsv2rgb(Correction(hue)/360, saturation, value, col));
}
