#include <stdio.h>

int main()
{
	int num=1;
	int total=0;

	while(num != 0)
	{
		printf("������ �Է��Ͻÿ�. : ");
		scanf("%d", &num);
		total+=num;
	}
	
	printf("����? %d \n", total);
	return 0;
}