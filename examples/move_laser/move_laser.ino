#include<cat_laser.h>
cat_laser laser;
int x;
int y;
int laserBrightness;
void setup(){
  laser.begin(11, 12, 13)//x servo pin is 11, y servo pin is 12, and laser pin is 13
}
laser.angle(x, y);
laser.laser(laserBrightness);
}
