#include <stdio.h>

int main()
{
	char str[100];
	int len=0;

	printf("���ܾ �Է��ϼ���. \n");
	scanf("%s", str);

	while(str[len] != 0)
		len++;

	printf("%d", len);
	return 0;
}
