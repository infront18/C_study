#include <stdio.h>

int main()
{
	char str[100];
	int len=0;
	int i;
	char max=0;

	printf("���ܾ� �Է� : ");
	scanf("%s", str);

	while(str[len] != 0)
		len++;

	for(i=0; i<len; i++)
		if(max<str[i])
			max=str[i];

	printf("����ū �ƽ�Ű �ڵ� ���� : %c \n", max);

	return 0;
}