#include <stdio.h>

int main()
{
	int i, dan;
	
	printf("�������� ���� �Է��ϼ���.\n");\
	scanf("%d", &dan);

	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d �Դϴ�. \n", i, dan, i * dan);
	}

return 0;
}