#include <stdio.h>

int main() 
{
	int array[] = {76, 45, 32, 567, 432};
	int i = 0;

	while(i < 5)
	{
		printf("%d��° �迭�� ���� %d �Դϴ�. \n", i+1, array[i]);
		i++;
	}
	
	return 0;
}

