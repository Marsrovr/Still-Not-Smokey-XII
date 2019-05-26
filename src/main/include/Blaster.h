
#include <frc/WPILib.h> 
#include "ctre/Phoenix.h"
#include <Prefs.h>

class Blaster{

    public: 

     Blaster(int blaster, int digit);

     

    private: 

     WPI_TalonSRX a_blaster; 
     
     frc::DigitalOutput a_digit;
       
}

