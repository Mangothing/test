#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor back_R = motor(PORT1, ratio18_1, false);
motor back_L = motor(PORT2, ratio18_1, false);
motor front_R = motor(PORT3, ratio18_1, false);
motor front_L = motor(PORT4, ratio18_1, false);
controller Controller1 = controller(primary);
motor Intakeleft = motor(PORT14, ratio18_1, false);
motor IntakeRight = motor(PORT15, ratio18_1, false);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}