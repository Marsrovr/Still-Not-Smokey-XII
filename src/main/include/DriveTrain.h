
#include <frc/WPILib.h> 
#include "ctre/Phoenix.h"

class DriveTrain{





 public:

    DriveTrain(int Left1, int Left2, int Left3, int Right4, int Right6, int Right7);

    //constructers don't return stuff

    void Update(float leftSpeed, float rightSpeed);


 private:

    WPI_TalonSRX a_Left1;
    WPI_TalonSRX a_Left2;
    WPI_TalonSRX a_Left3;
    WPI_TalonSRX a_Right4;
    WPI_TalonSRX a_Right6;
    WPI_TalonSRX a_Right7;

    frc::SpeedControllerGroup a_LeftSide; 
    frc::SpeedControllerGroup a_RightSide; 

    frc::DifferentialDrive a_Split;
 
};



 //(>^-^)>-]===>