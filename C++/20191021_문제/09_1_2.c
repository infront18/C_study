#include <stdio.h>

double CelToFah(double c);
double FahToCel(double f);

int main()
{
	int select;
	double num;
	printf("1. ������ ȭ���� 2. ȭ���� ������ \n");
	printf("����? ");
	scanf("%d", &select);

	if(select == 1)
	{
		printf("���� �Է� : ");
		scanf("%lf", &num);
		printf("��ȯ�� ȭ��: %f \n", CelToFah(num));
	}
	else if(select == 2)
	{
		printf("ȭ�� �Է� : ");
		scanf("%lf", &num);
		printf("��ȯ�� ����: %f \n", FahToCel(num));
	}
	else
		printf("���� ���� \n");

	return 0;
}

double CelToFah(double c) //������ ȭ����
{
	return 1.8 * c + 32;
}

double FahToCel(double f) //ȭ���� ������
{
	return (f-32) / 1.8;
}