// Right.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Altino.h"

int main()
{
	while (1)      // 우회전 코드
	{
		data = Sensor(1);
		printf("%d\t", data.IRSensor[0]);
		printf("%d\t", data.IRSensor[1]);
		printf("%d\t", data.IRSensor[2]);
		printf("%d\t", data.IRSensor[3]);
		printf("%d\t", data.IRSensor[4]);
		printf("%d\n", data.IRSensor[5]);

		if (data.IRSensor[1] > 2) {
			break;
		}

	}
	Steering(3);
	Go(250, 600);
	delay(1550);
	Steering(2);
	Go(300, 300);
	delay(500);
	Go(0, 0);
	return 0;
}

