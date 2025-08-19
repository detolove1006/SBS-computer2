#include <stdio.h>
#include <Windows.h>
#define up 72
#define left 75
#define right 77
#define down 80


void move(int x, int y)
{
	// x와 y축을 설정하는 구조체입니다.
	COORD position = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);

	// 콘솔 커서의 죄표를 설정하는 함수입니다.
}





int main()
{
	move(1, 9);
	printf("☆");


	







	return 0;
}