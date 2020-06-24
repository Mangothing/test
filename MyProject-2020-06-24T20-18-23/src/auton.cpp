#include "vex.h"
#include "auton.h" 
#include "opcontrol.h"

using namespace vex;

void moveforwardsimple(int speed){
  front_L.spin(fwd, speed, pct);
  back_L.spin(fwd, speed, pct);
  front_R.spin(fwd, speed, pct);
  back_R.spin(fwd, speed, pct);
}
void moveforwardsimple(int speed, double distanceIN){
  double wheelDiamter = 3.25;
  double circumfrence = 3.14 * wheelDiamter;
  double degreesToRotate = ((360 * distanceIN) / circumfrence);
  
  front_L.rotateFor(fwd, degreesToRotate,rotationUnits::deg, speed, velocityUnits::pct,false);
  back_L.rotateFor(fwd, degreesToRotate,rotationUnits::deg, speed, velocityUnits::pct,false);
  front_R.rotateFor(fwd, degreesToRotate,rotationUnits::deg, speed, velocityUnits::pct,false);
  back_R.rotateFor(fwd, degreesToRotate,rotationUnits::deg, speed, velocityUnits::pct);
}
void TurnLeft(int speed, double distanceIN){
  double wheelDiamter = 3.25;
  double circumfrence = 3.14 * wheelDiamter;
  double degreesToRotate = ((360 * distanceIN) / circumfrence);
  
  front_L.rotateFor(fwd, degreesToRotate,rotationUnits::deg, -speed, velocityUnits::pct,false);
  back_L.rotateFor(fwd, degreesToRotate,rotationUnits::deg, -speed, velocityUnits::pct,false);
  front_R.rotateFor(fwd, degreesToRotate,rotationUnits::deg, speed, velocityUnits::pct,false);
  back_R.rotateFor(fwd, degreesToRotate,rotationUnits::deg, speed, velocityUnits::pct);
}
void TurnRight(int speed, double distanceIN){
  double wheelDiamter = 3.25;
  double circumfrence = 3.14 * wheelDiamter;
  double degreesToRotate = ((360 * distanceIN) / circumfrence);
  
  front_L.rotateFor(fwd, degreesToRotate,rotationUnits::deg, speed, velocityUnits::pct,false);
  back_L.rotateFor(fwd, degreesToRotate,rotationUnits::deg, speed, velocityUnits::pct,false);
  front_R.rotateFor(fwd, degreesToRotate,rotationUnits::deg, -speed, velocityUnits::pct,false);
  back_R.rotateFor(fwd, degreesToRotate,rotationUnits::deg, -speed, velocityUnits::pct);
}