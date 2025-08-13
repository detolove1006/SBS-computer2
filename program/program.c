﻿#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int list[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int seed = rand() % size;

		int temporary = list[seed];

		list[seed] = list[i];

		list[i] = temporary;
	}

    

	
}

int main()
{


#pragma region rand Function
	// 0 ~ 32767 사이의 난수 값을 반환하는 함수입니다.

	// UTC 기준으로 1970년 1월 1일 0시 0분 초부터 경과된
	// 시간을 초(sec)로 반환하는 함수입니다.

	//srand(time(NULL));
	//
	//
	//int ramdom = rand() % 10 + 1;
	//
	//
	//
	//printf("램덤 값 : %d\n", ramdom);

#pragma endregion

#pragma region Shuffle Function


	int list[] = { 1,2,3,4,5,6,7,8,9,10 };

	int size = sizeof(list) / sizeof(list[0]);

	shuffle(list, size);

	for (int i = 0; i < size; i++)
	{
		printf("list[%d] = %d\n", i, list[i]);
	}







//pull request

    


	


#pragma endregion





	return 0;
}
