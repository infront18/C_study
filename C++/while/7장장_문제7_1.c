#include <stdio.h>

int main()
{
	int num;
	int i = 0;
	
	printf("양수를 입력하시오. \n");
	scanf("%d", &num);

	while (i<num)
	{
		printf("Hello world! \n");
		i++;
	}
	return 0;
}
