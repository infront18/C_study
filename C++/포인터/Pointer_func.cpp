#include <stdio.h>

void pointerPlus(int *num)
{
	*num += 5;
}

void numPlus(int num)
{
	num += 5;
} 

int main()
{
	int num = 15;
	printf("num �� : %d\n", num);

	numPlus(num);
	printf("numPlus ��� �� : %d\n", num);

	pointerPlus(&num);
	printf("pointerPlus ��� �� : %d\n", num);
	return 0;
}
