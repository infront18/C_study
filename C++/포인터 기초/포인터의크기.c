// 1-02 �������� ũ��

#include <stdio.h>

int main()
{
	int a;
	char c;
	printf("char* = %d byte \n", sizeof(&c));
	printf("int* = %d byte \n", sizeof(&a));
	printf("double* = %d byte \n", sizeof(double*));

	puts("�����ʹ� �ڷ����� ������� 4����Ʈ�̴�.");
	return 0;
}
