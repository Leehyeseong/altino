// Classtest1-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include<stdio.h>
#include"Altino.h"

void main()
{
	Open(szPort);

	SensorData data;

	Go(300, 300);
	while (1)
	{
		data = Sensor(1);
		printf("%d\t", data.IRSensor[0]);
		printf("%d\t", data.IRSensor[1]);
		printf("%d\t", data.IRSensor[2]);
		printf("%d\t", data.IRSensor[3]);
		printf("%d\t", data.IRSensor[4]);
		printf("%d\n", data.IRSensor[5]);

		if (data.IRSensor[1] > 1) {
			Go(0, 0);
			break;
		}
	}
	Steering(1);
	Go(300, 300);
	Sleep(2000);
	Go(0, 0);
	//data = Sensor(1);

	/*
	* 2번 문제
	*/
	/*
	Go(300, 300);

	while (1)
	{
	data = Sensor(1);
	if (data.CDSSensor < 150)
	{
	break;
	}
	}
	Go(0, 0);
	delay(5000);
	Go(300, 300);

	while (1)
	{
	data = Sensor(1);

	if (data.IRSensor[1] > 35)
	{
	printf("%d", data.IRSensor[1]);
	break;
	}
	}
	Go(-300, -300);
	delay(2200);
	Steering(3);
	Go(300, 300);
	delay(3500);
	Steering(2);
	Go(300, 300);

	while (1)
	{
	data = Sensor(1);
	printf("%d\n", data.IRSensor[1]);
	if (data.IRSensor[1] > 55)
	{
	//printf("%d", data.IRSensor[1]);
	break;
	}
	}
	Go(0, 0);
	*/

	/*while (1)
	{
	data = Sensor(1);
	if (data.CDSSensor < 150)
	{
	break;
	}
	}
	Go(0, 0);
	Sound(37);
	delay(1000);
	Sound(39);
	delay(1000);
	Sound(41);
	delay(1000);
	Sound(0);
	Go(300, 300);

	while (1)
	{
	data = Sensor(1);

	if (data.IRSensor[1] > 35)
	{
	printf("%d", data.IRSensor[1]);
	break;
	}
	}
	Go(-300, -300);
	delay(2800);
	Steering(1);
	Go(300, 300);
	delay(4000);
	Steering(0);
	Go(-300, -300);
	delay(1500);
	Go(300, 300);

	while (1)
	{
	data = Sensor(1);
	if (data.CDSSensor < 150)
	{
	break;
	}
	}
	Display('C');
	delay(200);
	Display('h');
	delay(200);
	Display('a');
	delay(200);
	Display('m');
	delay(200);
	Display('p');
	delay(200);
	Display('i');
	delay(200);
	Display('o');
	delay(200);
	Display('n');
	delay(200);

	while (1)
	{
	data = Sensor(1);

	if (data.IRSensor[1] > 35)
	{
	printf("%d", data.IRSensor[1]);
	break;
	}
	}
	Go(-300, -300);
	delay(2000);
	Steering(3);
	Go(300, 300);
	delay(4000);
	Steering(0);

	while (1)
	{
	data = Sensor(1);

	if (data.IRSensor[1] > 45)
	{
	printf("%d", data.IRSensor[1]);
	break;
	}

	}
	Go(0, 0);
	/*while (1) {
	data = Sensor(1);
	printf("정면 센서 : %d", data.IRSensor[1]);
	delay(1000);
	}*/
	Close();
}

