#include <stdio.h>

int Max(int num1, int num2, int num3)
{
	int max;

	if(num1>num2)
	{
		max=num1;
		if(num2<num3)
		{
			max=num3;
		}
	}
	else
	{
		max=num2;
		if(num1<num3)
		{
			max=num3;
		}
	}
}

int Min(int num1, int num2, int num3)
{
	int min;

	if(num1<num2)
	{
		min=num1;
		if(num2>num3)
		{
			min=num3;
		}
	}
	else
	{
		min=num2;
		if(num1>num3)
		{
			min=num3;
		}
	}
}

int main()
{
	int num1, num2, num3;
	printf("�� ���� �Է�: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("���� ū �� : %d \n", Max(num1, num2, num3));
	printf("���� ���� �� : %d \n", Min(num1, num2, num3));
	return 0;
}