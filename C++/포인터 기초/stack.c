// 1-03 parameter�� stack�� ����

#include <stdio.h>

void sub(int n)
{
	int k = 55;
	printf("sub�Լ� n = %3d, &n = %u \n", n, &n);
	printf("sub�Լ� k = %3d, &k = %u \n", n, &k);
}

int main(void)
{
	int a = 10;
	printf("main�Լ� a = %3d, &a = %u \n\n", a, &a);
	sub(a)	;
	
	return 0;
}
