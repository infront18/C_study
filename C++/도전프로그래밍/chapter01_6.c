#include <stdio.h>

int main()
{
	int h=0, m=0, s=0;

	printf("�ʸ� �Է��ϼ��� : ");
	scanf("%d", &s);

	h = s / 3600;
	m = (s % 3600) / 60;
	s = s % 60;
	printf("%d�ð� %d�� %d��", h, m, s);
	return 0;
}
