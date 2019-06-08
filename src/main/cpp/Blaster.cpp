
#include <frc/WPILib.h> 
#include "ctre/Phoenix.h"
#include <Prefs.h>
#include <Blaster.h> 

Blaster::Blaster(int blaster, int digit) :
a_blaster(blaster),
a_digit(digit)
{

}
 
void Blaster::Updated(float alldatpower) {

    a_blaster.Set(alldatpower);

} 
