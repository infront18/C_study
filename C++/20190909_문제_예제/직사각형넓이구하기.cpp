#include <stdio.h>

int main()
{
	int x, y;
	int x1, y1;
	int area;
	
	printf("�� ����� x, y ��ǥ:");
	scanf("%d %d", &x, &y);
	printf("�� �ϴ��� x, y ��ǥ:");
	scanf("%d %d", &x1, &y1);
	area = (x1 - x) * (y1 - y);
	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�.", area);
	return 0;
}

