#include <CompleteGPS.h>


CompleteGPS gps;

void loop()
{
	if(!Serial1.available())
		return;

	while(Serial1.available())
	{
		gps.encode(Serial1.read());
	}

	Serial.print("lat: ");
	Serial.print(gps.latitude);
	Serial.print(" lng: ");
	Serial.println(gps.longitude);

	if(gps.fix == CompleteGPS::FIX_3D)
		Serial.println("3D FIX");

	if(gps.fix == CompleteGPS::FIX_2D)
		Serial.println("2D FIX");

	if(gps.fix == CompleteGPS::FIX_NONE)
		Serial.println("NO FIX");

	Serial.print(gps.datetime.day);
	Serial.print("/");
	Serial.print(gps.datetime.month);
	Serial.print("/");
	Serial.print(gps.datetime.year);
	Serial.print(" ");
	Serial.print(gps.datetime.hours);
	Serial.print(":");
	Serial.print(gps.datetime.minutes);
	Serial.print(":");
	Serial.println(gps.datetime.seconds);

	if(gps.datetime.valid)
		Serial.println("GPS time is good");
	else
		Serial.println("GPS time is bad");
}


void setup()
{
	Serial1.begin(9600);
	Serial.begin(115200);
}



