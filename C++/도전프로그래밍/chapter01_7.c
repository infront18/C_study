#include <stdio.h>

int main()
{
	int num, count=0, temp=2;

	printf("���� n�� �Է��ϼ��� : ");
	scanf("%d", &num);

	while(1)
	{
		if(temp>num) break;
		temp *=2;
		count++;
	}
	
	printf("������ �����ϴ� k�� �ִ��� %d�̴�.", count);
	return 0;
}
