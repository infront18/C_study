#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
	char name[20];
	char p_num[20];
	int salary;
};

int main()
{
	struct employee a;

	printf("�̸��� �Է��ϼ���: ");
	scanf("%s", &a.name);
	printf("�ֹι�ȣ�� �Է��ϼ���: ");
	scanf("%s", &a.p_num);
	printf("������ �Է��ϼ���: ");
	scanf("%d", &a.salary);

	printf("�̸�: %s\n�ֹι�ȣ: %s\n����: %d\n", a.name, a.p_num, a.salary);
	return 0;
}
