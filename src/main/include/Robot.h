
#include <frc/WPILib.h> 
#include <DriveTrain.h>

class Robot : public frc::IterativeRobot 
{

 public:

  Robot();

  void RobotInit();
  void RobotPeriodic();
  void AutonomousInit();
  void AutonomousPeriodic();
  void TeleopInit();
  void TeleopPeriodic();
  void TestPeriodic();

//Returning a void and taking nothing in 

 private:
 
 DriveTrain a_trainDrive;
 frc::Joystick a_Joystick;

};



 //(>^-^)>-]===>