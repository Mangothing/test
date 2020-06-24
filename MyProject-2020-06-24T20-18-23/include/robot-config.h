using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor back_R;
extern motor back_L;
extern motor front_R;
extern motor front_L;
extern controller Controller1;
extern motor Intakeleft;
extern motor IntakeRight;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );