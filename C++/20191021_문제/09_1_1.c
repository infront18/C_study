#include <stdio.h>

int Max(int a, int b, int c);
int Min(int a, int b, int c);

int main()
{
	int a, b, c;
	printf("�� ���� �Է� : ");
	scanf("%d %d %d", &a, &b, &c);
	printf("���� ū �� : %d \n", Max(a, b, c));
	printf("���� ���� �� : %d \n", Min(a, b, c));
}

int Max(int a, int b, int c)
{
	if(a>b)
		return (a>c) ? a : c;
	else
		return (b>c) ? b : c;
}

int Min(int a, int b, int c)
{
	if(a<b)
		return (a<c) ? a : c;
	else
		return (b<c) ? b : c;
}