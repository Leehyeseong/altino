#include "stdafx.h"
#include "Altino.h"
#include <stdio.h>

int main()
{	
		SensorData data;
		
		int pass[4] = { 1, 2, 3 ,4 };
		int key[4] = { 0 };
		int i = 0;
		while (1) {
			data = Sensor(1);

			//센서 입력을 기다림
			while (1) {
				if (data.IRSensor[0] > 300) { key[i] = 1; break; }
				else if (data.IRSensor[1] > 300) { key[i] = 2; break; }
				else if (data.IRSensor[2] > 300) { key[i] = 3; break; }
				else if (data.IRSensor[3] > 300) { key[i] = 4; break; }
			}

			//현재 순서 값이 pass의 현재 순서 값과 같은지 확인
			if (pass[i] != key[i])
				i = 0;
			else
				i++;

			//5번째 순서: 입력값이 순서와 맞음. 종료
			if (i == 4)
				break;
		}
    return 0;
}

