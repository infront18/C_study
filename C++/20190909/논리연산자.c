#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	
	printf("�� ���� ������ �Է��ϼ���.\n");
	scanf("%d %d", &num1, &num2);
	
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d * %d = %d \n", num1, num2, num1 * num2);
	printf("%d / %d = %.2f \n", num1, num2, (float)num1 / num2);
	printf("%d %% %d = %d \n", num1, num2, num1 % num2);
	printf("\n");
	
	printf("%d > %d = %d \n", num1, num2, num1 > num2);
	printf("%d < %d = %d \n", num1, num2, num1 < num2);
	printf("%d == %d = %d \n", num1, num2, num1 == num2);
	printf("%d != %d = %d \n", num1, num2, num1 != num2);
	printf("%d >= %d = %d \n", num1, num2, num1 >= num2);
	printf("%d <= %d = %d \n", num1, num2, num1 <= num2);
	printf("\n");
	
	printf("%d %d = %d \n", num1, num2, num1 > num2 && num1 != num2);
	printf("%d %d = %d \n", num1, num2, num1 < num2 && num1 != num2);
	printf("%d %d = %d \n", num1, num2, num1 > num2 || num1 != num2);
	return 0;
}

/*
& = ���׿�����, �ּ� 
&& = ��������
num1 & num2 = ���׿����� 
*/

 
