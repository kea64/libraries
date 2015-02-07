#ifndef H2_Mode_h
#define H2_Mode_h

#include <Arduino.h>
#include <TinyGPS++.h>
#include <H2_HMC5883L.h>
#include <H2_ADXL345.h>
#include <H2_ITG3200.h>
#include <H2_L3D4200D.h>
#include <H2_BMP180.h>
#include <H2_TiltComp.h>
#include <H2_Orient.h>
#include <H2_Target.h>
#include <H2_PID.h>
#include <H2_Output.h>
#include <H2_Drone_Values.h>
#include <H2_Support.h>
#include <H2_Controller.h>
#include <H2_Mode.h>

void updateMode(struct PID_REGISTER &channels, struct TARGET_STRUCT &target, struct ORIENT_STRUCT &orient, byte &RC_CONTROL_MODE, unsigned long &modeClockOld);

#endif