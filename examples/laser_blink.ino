#include<cat_laser.h>
cat_laser laser;
bool laser;
void setup(){
  laser.begin(11, 12, 13);
}
void loop(){
laser.laser(laser);
laser = true;//Turn the laser on
delay(100);
laser.laser(laser);
laser = false;//Turn the laser off
}
