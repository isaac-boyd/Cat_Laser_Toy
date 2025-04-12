#include "cat_laser.h"
#include <Servo.h>
cat_laser::cat_laser() {
  // Constructor logic (if any)
}
Servo xServo;
Servo yServo;
void cat_laser::begin(xPin, yPin, laserPin) {
   xServo.attach(xPin);
   yServo.attach(yPin);
   pinMode(laserPin, OUTPUT);  
}
void cat_laser::laser(laser){
  digitalWrite(laserPin, laser);
}
void cat_laser::laser(laser2){
  analogWrite(laserPin, laser);
}
void cat_laser::x(xAngle){
  xServo.write(xAngle);
}
void cat_laser::y(yAngle){
  yServo.write(yAngle);
}
void cat_laser::angle(xAngle, yAngle){
  xServo.write(xAngle);
  yServo.write(yAngle);
}
