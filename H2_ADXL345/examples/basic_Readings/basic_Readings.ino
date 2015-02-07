#include <Wire.h>
#include <Quad_ADXL345.h>

ADXL345 acc;

void setup(){
  Serial.begin(38400);
  Wire.begin();
  acc.init();
}

void loop(){
  acc.readAcc();
  //quickFunc(acc);
  Serial.print("X: ");
  Serial.println(acc.x);
  Serial.print("Y: ");
  Serial.println(acc.y);
  Serial.print("Z: ");
  Serial.println(acc.z);
  
  delay(50);
}

void quickFunc(class ADXL345 &accel){
  accel.x = 0;
}
