
#include <frc/WPILib.h> 
#include "ctre/Phoenix.h"
#include <Prefs.h>
#include <Blaster.h> 

Blaster::Blaster(int blaster, int digit) :
a_blaster(blaster),
a_digit(digit) // digit = channel 
{

}
 
void Blaster::Updated(float alldatpower) {

    a_blaster.Set(alldatpower);

} 

void Blaster::pewieojgfkjhe5o8t7uaoieutiq3uw43iy7tyaesrhoijt2(bool shootQuestionMark) {
    
    a_digit.Set(shootQuestionMark); // :parrot:
    // c:[>

}
