#include <stdio.h>

int main()
{
	int num;
	int i = 1;

	printf("����� �Է��Ͻÿ�. \n");
	scanf("%d", &num);

	while (i <= num)
	{
		printf("%d ", 3*i);
		i++;
	}
	return 0;
}
