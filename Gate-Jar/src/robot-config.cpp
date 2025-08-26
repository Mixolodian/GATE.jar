#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.

brain Brain;
//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);
//Left Motors
motor LeftFront = motor(PORT1, ratio6_1, true);
motor LeftMid = motor(PORT10, ratio6_1, false);
motor LeftBack = motor(PORT2, ratio6_1, true);
//Right Motors
motor RightFront = motor(PORT4, ratio6_1, true);
motor RightMid = motor(PORT6, ratio6_1, false);
motor RightBack = motor(PORT7, ratio6_1, false);
//Subsystem Motors 
motor Intake = motor(PORT19, false);
motor BackRoller = motor(PORT20, ratio6_1, false);
motor TopRoller = motor(PORT9, false);


//Add your devices below, and don't forget to do the same in robot-config.h:
inertial Inertial = inertial(PORT15);
controller Controller1 = controller(primary);
digital_out Hood = digital_out(Brain.ThreeWirePort.A);
digital_out Wings = digital_out(Brain.ThreeWirePort.B);
rotation RotationX = rotation(PORT14);
rotation RotationY = rotation(PORT12);


void vexcodeInit( void ) {
  // nothing to initialize
}