#include <stdio.h>

int main()
{
	int arr[5];
	int max, min;
	int total;
	int i;
	
	for(i=0; i<5; i++)
	{
		printf("������ �Է��Ͻÿ�. : \n");
		scanf("%d", &arr[i]);
		
	}

	total=max=min=arr[0];
	for(i=1; i<5; i++)
	{
		total+=arr[i];
		if(arr[i] > max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
		
	}

	printf("�ִ밪 : %d \n", max);
	printf("�ּҰ� : %d \n", min);
	printf("��? %d", total);

	return 0;
}