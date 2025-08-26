using namespace vex;

extern brain Brain;

//To set up a motor called LeftFront here, you'd use
//extern motor LeftFront;
extern motor LeftFront;
extern motor LeftMid;
extern motor LeftBack;
extern motor RightFront;
extern motor RightMid;
extern motor RightBack;
extern motor Intake;
extern motor TopRoller;
extern motor BackRoller;

//Add your devices below, and don't forget to do the same in robot-config.cpp:
extern inertial Inertial;
extern controller Controller1;
extern digital_out Hood;
extern digital_out Wings;





void  vexcodeInit( void );