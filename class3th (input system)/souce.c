#include <stdio.h>
#include <Windows.h>

#define SIZE 10




int main()
{

#pragma region GetAsyncKeyState
	// windows API에서 제공하는 입력 처리 함수로, 지정된 키의 상태를
	// 비동적으로 확인할 때 사용되는 함수입니다.



	const char* dialog[SIZE];

	dialog[0] = "탐정 : 왜 오셨나요.";
	dialog[1] = "의뢰인 : 죄 크게 저질렀습니다.";
	dialog[2] = "탐정 : 무슨 죄를 저질렀나요?";
	dialog[3] = "의뢰인 :사람을 흉기로 찔렀어요 .";
	dialog[4] = "탐정 : 자수하시는 건가요?";
	dialog[5] = "의뢰인 : 넵..";
	dialog[6] = "탐정 : 현장에서 당신의 dna가 안나왔습니다";
	dialog[7] = "의뢰인 : ...";
	dialog[8] = "탐정 : 거짓말을 하고있나요?";
	dialog[9] = "의뢰인 : 아뇨...";




	int i = 0;

	while (i < SIZE)
	{
		if (GetAsyncKeyState(VK_SPACE) & 0x001)
		{
			if (i % 2 == 0)
			{
				printf("탐정 : %s\n", dialog[i]);
			}
			else
			{
				printf("의뢰인 : %s\n", dialog[i]);
			}
			i++;
		}
	}

	printf("대화가 종료되었습니다.\n");








	// key state
	// 0x0000 :이전에 누른 적이 없고, 호출 시점에도 눌러있지 않은 상태

	// 0x0001 : 이전에 누른 적이 있고, 호출 시점에는 눌려있지 않은 상태

	// 0x8000 : 이전에 누른 적이 없고, 호출 시점에는 눌려있는 상태

	//  0x8001 : 이전에 누른 적이 있고, 호출 시점에는 눌려있는 상태





#pragma endregion






	return 0;
}