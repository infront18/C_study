#include <stdio.h>

int main()
{
	int a;
	printf("������ �Է��ϼ���.\n");
	scanf("%d", &a);
	
	if (a >= 90)
	{
		if (a >= 95)
		{
			printf("A+�����Դϴ�.", a);
		}
		else
		{
			printf("A-�����Դϴ�.", a);
		}
	}
	
	else if (a >= 80)
	{
		printf("B�����Դϴ�.", a);
	}
	
	else if (a >= 70)
	{
		printf("C�����Դϴ�.", a);
	}
	else if (a >= 60)
	{
		printf("D�����Դϴ�.", a);
	}
	else
	{
		printf("F�����Դϴ�.");
	}
	
	return 0;
}

