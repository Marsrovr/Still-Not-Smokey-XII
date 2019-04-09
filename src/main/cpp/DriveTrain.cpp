
#include <DriveTrain.h>


DriveTrain::DriveTrain(int Left1, int Left2 /*int Left3*/, int Right4, int Right6 /*int Right7*/)
:
a_Left1(Left1), 
a_Left2(Left2), 
//a_Left3(Left3), 
a_Right4(Right4), 
a_Right6(Right6), 
//a_Right7(Right7),
a_LeftSide(a_Left1, a_Left2 /*a_Left3*/),
a_RightSide(a_Right4, a_Right6 /*a_Right7*/), 
a_Split(a_LeftSide, a_RightSide)
{

    //constructing stuff

    a_Left2.ConfigSelectedFeedbackSensor(QuadEncoder, 0, 0); //declaring that we have an encoder
    a_Right6.ConfigSelectedFeedbackSensor(QuadEncoder, 0, 0); 

    //Used in differential function 



}

void DriveTrain::Update(float leftSpeed, float rightSpeed) { 

    a_Split.TankDrive(leftSpeed, rightSpeed, false);
    //Tank drive is a method for differential class

    //don't use curvature drive = two joystick 
    //archa drive = single joy stick <-- use

    //Tells motors to go 

}

float DriveTrain::StealRight() { 

    //goal: call the method from robot -> return a value 

    return a_Right6.GetSelectedSensorPosition(0);

}

float DriveTrain::StealLeft() {  

    return a_Left2.GetSelectedSensorPosition(0);

}

bool Drive2Dist(float dist) {

    /*float far = (StealRight() + StealLeft()) / 2 ; 

    if(far == dist) {

        
        
    }*/

} 