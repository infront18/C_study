#include <stdio.h>

void SquareByValue(int num)
{
	printf("num�� �������� %d \n",(num*num));	
}

int SquarByReference(int * ptr)
{
	int num = *ptr;
	*ptr=num*num;
	return *ptr;
}

int main(void)
{
	int num1;
	printf("num ���� �Է��ϼ��� \n");
	scanf("%d",&num1);

	SquareByValue(num1);

	SquarByReference(&num1);

	printf("Refernce �Լ��� �������� %d",num1);
	return 0;
}	