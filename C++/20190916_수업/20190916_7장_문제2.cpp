#include <stdio.h>

int main()
{
	int n, i;
	int result = 1;

	printf("�������� �Է��Ͻÿ�. \n");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		result = result * i;

	printf("%d! = %d \n", n, result);

	return 0;
}