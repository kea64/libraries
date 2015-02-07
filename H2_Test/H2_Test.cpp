#include <H2_Test.h>
#include <Arduino.h>
#include <H2_Drone_Values.h>

extern int bob;

int doStuff(){
	bob += 5;
	int stuff = GPS_SATELLITE_MINIMUM * 2.0 * bob;
	return(stuff);
}