// 자이로센서.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Altino.h"

SensorData data;

int main()
{
	int x, y, z;
	Open(szPort);
	data = Sensor(2);
	x = data.MSensor[0];
	y = data.MSensor[1];
	z = data.MSensor[2];
	while (1) {
		Sleep(500);
		data = Sensor(2);
		printf("x %+8d ", x - data.MSensor[0]);
		printf("y %+8d ", y - data.MSensor[1]);
		printf("z %+8d\n", z - data.MSensor[2]);
	}

	return 0;
}


