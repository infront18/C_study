#include <stdio.h>

double CelToFah(double num)
{
	return 1.8 * num + 32;
}

double FahToCel(double num)
{
	return (num - 32) / 1.8; 
}

int main()
{
	int select;
	double num;
	printf("1.������ ȭ���� \n");
	printf("2.ȭ���� ������ \n");
	printf("����? ");
	scanf("%d", &select);

	switch(select)
	{
		case 1 : printf("���� �µ��� �Է��ϼ���.");
				 scanf("%lf", &num);
				 printf("��ȯ�� ȭ��: %f \n", CelToFah(num));
			 	 break;

		case 2 : printf("ȭ�� �µ��� �Է��ϼ���.");
				 scanf("%lf", &num);
				 printf("��ȯ�� ����: %f \n", FahToCel(num));
				 break;
		
		default : printf("����");
				  break;
	}
	return 0;	
}