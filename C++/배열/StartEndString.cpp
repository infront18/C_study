#include <stdio.h>

int main()
{
	char str[50]="I like C programming";
	printf("string: %s \n", str);

	str[8]='\0'; // 9번째 요소에 널 문자 저장
	printf("string: %s \n", str);

	str[6]='\0';
	printf("string: %s \n", str);

	str[1]='\0';
	printf("string: %s \n", str);
	return 0;
}