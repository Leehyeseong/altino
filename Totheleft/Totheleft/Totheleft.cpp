// Totheleft.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include<stdio.h>
#include"Altino.h"

int main()
{
	int x, y, z;
	Open(szPort);
	SensorData data;
	//data = Sensor(1);


	Go(300, 300);
	while (1)
	{

		//Steering(2);
		//Go(300, 300);

		data = Sensor(1);

		if (data.IRSensor[1] > 30)
		{
			x = data.IRSensor[1];
			printf("1 - 1 번째 : %d\n", data.IRSensor[1]);
			Steering(3);
			Go(-300, -300);
			delay(500);
			data = Sensor(1);
			printf("1 - 2 번째 : %d\n", data.IRSensor[1]);
			if (data.IRSensor[1] < x)
			{
				y = data.IRSensor[1];
				Steering(1);
				Go(300, 300);
				delay(800);
				data = Sensor(1);
				printf("2번째 : %d\n", y);
			}


		}
		//data = Sensor(1);
		printf("3번째 : %d\n", data.IRSensor[1]);
		if (data.IRSensor[1] < 10)
		{
			Steering(2);
			Go(300, 300);
		}

	}





	return 0;
}