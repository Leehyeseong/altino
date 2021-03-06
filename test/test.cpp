#include "stdafx.h"
#include "Altino.h"
#include <stdio.h>

char Port[15] = "\\\\.\\COM06";

void main()
{
	SensorData d1;
	Open(Port);

	while (1)
	{
		d1 = Sensor(1);
		printf("cds:%d\n", d1.CDSSensor);

		if (d1.CDSSensor >160)
			break;
	}

	Go(300, 300);
	Led(0x03);

	Sleep(2500);

	Steering(1);
	Go(300, 300);

	Sleep(2300);
	Steering(2);
	Go(200, 200);

	while (1)
	{
		d1 = Sensor(1);
		printf("cds:%d\n", d1.CDSSensor);
		if (d1.CDSSensor < 40)
			break;
	}

	Go(0, 0);
	Display('A');
	Sleep(1000);
	Display('B');
	Sleep(1000);
	Display('C');
	Sleep(1000);
	Go(250, 250);
	while (1)
	{
		d1 = Sensor(1);
		printf("ir2:%d\n", d1.IRSensor[1]);
		if (d1.IRSensor[1] > 40)
			break;
	}

	Go(0, 0);
	DisplayLine(0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff);
	Led(0xff);
	Sound(37);
	Close();
}
