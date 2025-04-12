#ifndef cat_laser_H
#define cat_laser_H

#include <Servo.h>


class cat_laser {
  public:
    cat_laser();  // Constructor
    void begin(xPin, yPin, laserPin); 
    void laser(laser);
    void laser(laser2);
    void x(xAngle);
    void y(yAngle);
    void angle(xAngle, Angle);
    
};
privet:
  int xPin;
  int yPin;
  int laserPin;
  bool laser;
  int laser2;
  int xAngle;
  int yAngle;
  
#endif
