#include "vex.h"
#include "opcontrol.h"

using namespace vex;

void joyStickControl(){
front_L.spin(fwd, Controller1.Axis3.position(), pct);
back_L.spin(fwd, Controller1.Axis3.position(), pct);
front_R.spin(fwd, Controller1.Axis3.position(), pct);
back_R.spin(fwd, Controller1.Axis3.position(), pct);
}

void intakecontrol(){
  if(Controller1.ButtonR1.pressing()){
    IntakeRight.spin(fwd, 100, pct);
    Intakeleft.spin(fwd, 100, pct);
  }
  else if(Controller1.ButtonR2.pressing()){
  IntakeRight.spin(fwd, -100, pct);
    Intakeleft.spin(fwd, -100, pct);
  }
  else{
    IntakeRight.stop(brake);
    Intakeleft.stop(brake);
  }
}