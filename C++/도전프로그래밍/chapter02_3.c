#include <stdio.h>

int main()
{
	int num, i;
	int odd=0, even=9;
	int arr[10]={0};
	printf("�� 10���� ���� �Է�\n");

	for(i=0; i<10; i++)
	{
		printf("�Է� :");
		scanf("%d\n", &num);

		switch(num%2)
		{
			case 0 :
				arr[even] = num;
				even--;
				break;

			case 1 :
				arr[odd] = num;
				odd++;
				break;
		}
	}

	
	printf("�迭����� ��� : ");

	for(i=0; i<10; i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}