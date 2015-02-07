#include <CompleteGPS.h>


CompleteGPS gps;

void loop()
{
	if(!Serial1.available())
		return;

	while(Serial1.available())
	{
		gps.encode(Serial1.read()); //read and process GPS data
	}

	Serial.println("\tPRN\tAzimuth\tElev\tSNR");

	int i;
	for(i = 0; i <= gps.sats_in_use-1; i++)
	{
		Serial.print("Sat");
		Serial.print(i);
		Serial.print("\t");
		Serial.print(gps.sats[i].prn); //satellite pseudo random noise
		Serial.print("\t");
		Serial.print(gps.sats[i].azimuth); //azimuth
		Serial.print("\t");
		Serial.print(gps.sats[i].elevation); //elevation
		Serial.print("\t");
		Serial.println(gps.sats[i].snr); //signal to noise ratio
	}
}


void setup()
{
	Serial1.begin(9600);
	Serial.begin(115200);
}



