// 1-01 �������� �⺻
#include <stdio.h>

int main()
{
	int a = 30;
	int b = 50;
	// char c = 'A';
	int* p = &a;

	p = &b;
	*p = 200;
	// p = &c; ���

	printf("a = %d, &a = %u \n", a, &a);
	printf("b = %d, &b = %u \n", b, &b);
	printf("*p = %d, p = %u, &p = %u \n", *p, p, &p);

	return 0;
}
