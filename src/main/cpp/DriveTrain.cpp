
#include <DriveTrain.h>
#include <Prefs.h>


DriveTrain::DriveTrain(int Left2, int Right6 /*int Left3, int Right4, int Right7*/)
:
a_Left2(Left2),
a_Right6(Right6), 
// a_Left1(Left1),  
// a_Left3(Left3), 
// a_Right4(Right4), 
// a_Right7(Right7),
a_LeftSide(a_Left2 /*a_Left1,a_Left3*/),
a_RightSide(a_Right6 /*a_Right4,a_Right7*/), 
a_Split(a_LeftSide, a_RightSide)
{
    // 79, 87, 99, 104 
    // constructing stuff

    a_Left2.ConfigSelectedFeedbackSensor(QuadEncoder, 0, 0); //declaring that we have an encoder
    a_Right6.ConfigSelectedFeedbackSensor(QuadEncoder, 0, 0); //still declaring that we have an encoder

    // Used in differential function 

}

void DriveTrain::Update(float leftSpeed, float rightSpeed) { 

    rightSpeed *= -1; 
    a_Split.TankDrive(leftSpeed, rightSpeed, false);

    /* Tank drive is a method for differential class

    - Don't use curvature drive = two joystick 
    - Archa drive = single joy stick <-- use

    - Tells motors to go */ 


}

float DriveTrain::StealRight() { 

    // goal: call the method from robot -> return a value 

    return a_Right6.GetSelectedSensorPosition(0);

}

float DriveTrain::StealLeft() {  

    return a_Left2.GetSelectedSensorPosition(0);

}

bool DriveTrain::Drive2Dist(float dist) {

    float far = (StealRight() + StealLeft()) / 2 ; 
    float whateverYouWant = (dist/WHEELE) * REV;

    if(far >= whateverYouWant) { 
        Update(0.0, 0.0);
        return true;
    } else {
        Update(0.6, 0.6);
        return false;
    }

} 

bool DriveTrain::ShipDrive(int dist) {

    int tempDist = (StealLeft() + StealRight()) / 2 ; //tells us the distance we have gone

// c:

    if (tempDist < dist) {
        if (StealLeft() > StealRight()) {
            Update(.35, .5) ;
        } else if (StealLeft() < StealRight()) {
            Update(.5, .35) ; 
        } else {
            Update(.5, .5);  
        }  //.5 = normal speed 
        return false ; 
    } else {
        Update(0, 0);   
        return true;
    }

}