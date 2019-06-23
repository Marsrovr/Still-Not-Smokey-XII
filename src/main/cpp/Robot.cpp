
#include <Robot.h>
#include <Prefs.h>

Robot::Robot():
a_trainDrive(LEFT2, RIGHT6/*LEFT1, LEFT3, RIGHT4 ,RIGHT7*/),
a_Joystick(JOYSTICK_PORT), a_Joystuck(J0YSTUCK_P0RT) {

/* 
    - Have to initalize the member (run the constructer) 
    - when an object is being made inside an object
    - Member Initialization: The fancy way to initalize an object inside an object */ 

}


void Robot::RobotInit() {



}

void Robot::RobotPeriodic() {



}

void Robot::AutonomousInit() {



}

void Robot::AutonomousPeriodic() {

a_trainDrive.Drive2Dist(5);

}

void Robot::TeleopInit() {

 

}

void Robot::TeleopPeriodic() {

  // Varible in the function: only lasts duration of the function

  a_trainDrive.Update(a_Joystick.GetRawAxis(1), a_Joystick.GetRawAxis(5));
  a_Blaster.Updated(a_Joystuck.GetRawAxis(1));

}

void Robot::TestPeriodic() {

  // c:

}

int main() { 

  return frc::StartRobot<Robot>(); 

}
