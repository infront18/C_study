#include <stdio.h>

int calExpo(int, int);

int main()
{
	int num;
	printf("������ �Է��ϼ���. : ");
	scanf("%d", &num);
	printf("2�� %d���� %d \n", num, calExpo(2, num));
	return 0;
}

int calExpo(int result, int count)
{
	if(count == 0){
		return 1;
	}
	return result *= calExpo(result, --count);
}
