#include <stdio.h>

int main(void)
{
	int sum=0;
	int i, num;
	printf("0���� num������ ��, num��?");
	scanf("%d", &num);
	
	for(i=0; i<num+1; i++)
		sum=i+sum;
		
	printf("0���� %d���� �������: %d \n", num, sum);
	return 0;
}
