#include <stdio.h>

int main()
{
	double num1, num2;
	printf("�� �Ǽ��� �Է��ϼ���.");
	scanf("%lf %lf", &num1, &num2);
	
	printf("�� �Ǽ��� �� : %lf \n", num1 + num2);
	printf("�� �Ǽ��� �� : %lf \n", num1 - num2);
	printf("�� �Ǽ��� �� : %lf \n", num1 * num2);
	printf("�� �Ǽ��� ������ : %lf \n", num1 / num2);
	
	return 0;
}

