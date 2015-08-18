//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: SLAM_terminate.cpp
//
// MATLAB Coder version            : 2.8
// C/C++ source code generated on  : 18-Aug-2015 14:23:32
//

// Include Files
#include "rt_nonfinite.h"
#include "SLAM.h"
#include "SLAM_terminate.h"
#include "SLAM_updIT.h"
#include <stdio.h>

// Function Definitions

//
// Arguments    : void
// Return Type  : void
//
void SLAM_terminate()
{
  SLAM_free();
  SLAM_updIT_free();
}

//
// File trailer for SLAM_terminate.cpp
//
// [EOF]
//