#include <stdio.h>

int main()
{
	int arr1[5]={1,2,3,4,5};
	int arr2[] ={1,2,3,4,5,6,7};
	int arr3[5]={1,2};
	int ar1Len, ar2Len, ar3Len, i;

	printf("배열 arr1의 크기: %d \n", sizeof(arr1));
	printf("배열 arr2의 크기: %d \n", sizeof(arr2));
	printf("배열 arr3의 크기: %d \n", sizeof(arr3));

	ar1Len = sizeof(arr1) / sizeof(int); //배열 arr1의 길이 계산
	ar2Len = sizeof(arr2) / sizeof(int);
	ar3Len = sizeof(arr3) / sizeof(int);

	for(i=0; i<ar1Len; i++)
		printf("%d", arr1[i]);
	printf("\n");

	for(i=0; i<ar2Len; i++)
		printf("%d", arr2[i]);
	printf("\n");

	for(i=0; i<ar2Len; i++)
		printf("%d", arr2[i]);
	printf("\n");
	
	return 0;
}