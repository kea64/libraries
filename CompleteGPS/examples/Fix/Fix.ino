#include <CompleteGPS.h>


CompleteGPS gps;

void loop()
{
	if(!Serial1.available()) //if there is no GPS data available, return
		return;

	while(Serial1.available())
	{
		gps.encode(Serial1.read()); //read and process all data available
	}

	if((millis() - gps.fix_age) < 2000) //check how old the fix is. 
										//this is important because if the GPS has been disconnected, it won't be able to tell us that it doesn't have a fix
	{
		if(gps.fix == CompleteGPS::FIX_3D)
			Serial.println("3D FIX");

		if(gps.fix == CompleteGPS::FIX_2D)
			Serial.println("2D FIX");

		if(gps.fix == CompleteGPS::FIX_NONE)
			Serial.println("NO FIX");
	}
	else
	{
		Serial.println("GPS hasn't produced valid fix data for a couple of seconds.");
	}
}


void setup()
{
	Serial1.begin(9600);
	Serial.begin(115200);
}



