
#include <frc/WPILib.h> 
#include "ctre/Phoenix.h"
#include <Prefs.h>

class Blaster{

    public: 

     Blaster(int blaster, int digit);

     void Updated(float alldatpower); 

    void pewieojgfkjhe5o8t7uaoieutiq3uw43iy7tyaesrhoijt2(bool shootQuestionMark); //send a true or false to nerf gun

    private: 

     WPI_TalonSRX a_blaster; 
     
     frc::DigitalOutput a_digit;
       
};
