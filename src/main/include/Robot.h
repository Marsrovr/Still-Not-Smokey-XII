
#include <frc/WPILib.h>
#include <rev/CANSparkMax.h> 
#include <DriveTrain.h>
#include <Blaster.h> 
#include <Auto.h>

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

/* 
    - Keep track of distance: Time of flight, encoders 
    - Route encoders through talons -> more efficent 
    - Returning a void and taking nothing in */ 

 private:
 
 Blaster a_Blaster;
 DriveTrain a_trainDrive;
 Auto a_AutoRoboto; 
 frc::Joystick a_Joystick;
 frc::Joystick a_Joystuck; 


 rev::CANSparkMax a_Neo;

};

 //(>^-^)>-]===>
