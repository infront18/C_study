#include <stdio.h>

int main()
{
	int total=0;
	int i, num;
	printf("0���� num������ ����, num��?");
	scanf("%d", &num);

	for(i=0; i<num+1; i++)
		total+=i;

	printf("0���� %d���� �������: \n", num, total);
}