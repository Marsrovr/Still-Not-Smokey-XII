#include <Auto.h> 
#include <DriveTrain.h>

  Auto::Auto(DriveTrain *driveIn): 
  a_DriveTrain(driveIn),
  a_AutoPath(kDontMove)
  {



  } 

  void Auto::AutoInit() { 

    a_AutoPath = kMoveForward; 

  }

  void Auto::AutoPeriodic(int leftDist, int rightDist) { 



  }

