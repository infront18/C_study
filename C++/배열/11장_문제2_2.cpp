#include <stdio.h>

int main()
{
	char arr[100];
	char temp;
	int len = 0;
	int i;

	printf("���ܾ �Է��ϼ���. \n");
	scanf("%s", arr);

	while(arr[len] != 0)  // ���ܾ��� ���� ���
		len++;

	for(i=0; i<len/2; i++)  // ���ܾ� ������
	{
		temp=arr[i];  // ���� ���� �ӽ÷� ����
		arr[i]=arr[(len-i)-1]; //���� ���ڸ� ������
		arr[(len-i)-1]=temp;  //���� ���ڸ� �ڷ�
	}
	printf("Ȯ�� : %s \n", arr);
	return 0;
}
