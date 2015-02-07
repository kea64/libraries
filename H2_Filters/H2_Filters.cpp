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
#include <H2_Filters.h>

void compli(class ITG3200 &gyro, class ADXL345 &accel, struct ORIENT_STRUCT &orient, unsigned long &compliClockOld){
	//Complimentary Filter to Mix Gyro and Accelerometer Data
	gyro.update();
	accel.update();

	orient.rollGyro = gyro.x;
	orient.pitchGyro = gyro.y;
	orient.yawGyro = gyro.z;

	double cycle = (micros() - compliClockOld) * DIV_BY_MICRO;

	double pitchAccel = atan2(-accel.x, accel.z)*RAD_TO_DEGREE*ACC_SCALAR + PITCH_OFFSET;
	//orient.pitch = compliAlpha * (orient.pitch + (gyro.y) * cycle) + (1 - compliAlpha) * pitchAccel;
	orient.pitch = compliAlpha * (orient.pitch + (gyro.y * cycle) - pitchAccel) + pitchAccel;

	double rollAccel = atan2(accel.y, accel.z)*RAD_TO_DEGREE*ACC_SCALAR + ROLL_OFFSET;
	//orient.roll = compliAlpha * (orient.roll + (gyro.x) * cycle) + (1 - compliAlpha) * rollAccel;
	orient.roll = compliAlpha * (orient.roll + (gyro.x * cycle) - rollAccel) + rollAccel;
}