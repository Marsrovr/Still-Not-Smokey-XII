#pragma once 

enum AutoPath {
    kMoveForward = 0, 
    kDontMove = 1 
}; // enum, containt two paths 

class Auto{

    public: 

        Auto(DriveTrain *driveIn); // * = looking for a memory address to be given as an input  
        void AutoInit();
        void AutoPeriodic(int leftDist, int rightDist);

    private: 

        DriveTrain *a_DriveTrain; 
        AutoPath a_AutoPath; 
        
        


};