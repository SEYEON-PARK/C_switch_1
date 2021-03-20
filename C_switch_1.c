#include <stdio.h>

int main(void)
{
	int a = 1; // 초기화

	switch (a)
	{
	case 0: 
		printf("0입니다.\n");
		break;
	case 1:
		printf("1입니다.\n");
		break;
	case 2: 
		printf("2입니다.\n");
	default:
		break;
	} // switch문 사용하기

	return 0;
}
