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
	struct employee arr[3];
	int i;

	for(i=0; i<3; i++){
		printf("�̸��� �Է��ϼ���: ");
		scanf("%s", &arr[i].name);
		printf("�ֹι�ȣ�� �Է��ϼ���: ");
		scanf("%s", &arr[i].p_num);
		printf("������ �Է��ϼ���: ");
		scanf("%d", &arr[i].salary);
	};

	for(i=0; i<3; i++){
		printf("�̸�: %s\n�ֹι�ȣ: %s\n����: %d\n", arr[i].name, arr[i].p_num, arr[i].salary);
	};
	return 0;
}
