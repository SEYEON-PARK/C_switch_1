#include <stdio.h>

int main(void)
{
	int a = 1;

	switch (a)
	{
	case 0: 
		printf("0�Դϴ�.\n");
		break;
	case 1:
		printf("1�Դϴ�.\n");
		break;
	case 2: 
		printf("2�Դϴ�.\n");
	default:
		break;
	}

	return 0;
}