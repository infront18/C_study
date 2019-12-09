#include <stdio.h>

int add_book(char (*book_name)[30], char (*auth_name)[30], 
			 char (*publ_name)[30], int *borrowed, int *num_total_book);

int search_book(char (*book_name)[30], char (*auth_name)[30],
				char (*publ_name)[30], int num_total_book);

char compare(char *str1, char *str2);

int borrow_book(int *borrowed);

int return_book(int *borrowed);

int main()
{
	int user_choice; // ������ ������ �޴�
	int num_total_book = 0; // ���� å�� ��

	// ���� å, ����,���ǻ縦 ������ �迭 ����. å�� �ִ� ������ 100��
	char book_name[100][30], auth_name[100][30], publ_name[100][30];
	// ���ȴ��� ���¸� ǥ��
	int borrowed[100];

	while(1)
	{
		printf("���� ���� ���α׷� \n");
		printf("�޴��� �����ϼ��� \n");
		printf("1. å�� ���� �߰��ϱ� \n");
		printf("2. å�� �˻��ϱ� \n");
		printf("3. å�� ������ \n");
		printf("4. å�� �ݳ��ϱ� \n");
		printf("5. ���α׷� ���� \n");

		printf("����� ������? : ");
		scanf("%d", &user_choice);

		if (user_choice == 1)
		{
			add_book(book_name, auth_name, publ_name, borrowed, &num_total_book);
		}
		else if (user_choice == 2)
		{
			search_book(book_name, auth_name, publ_name, num_total_book);
		}
		else if (user_choice == 3)
		{
			borrow_book(borrowed);
		}
		else if (user_choice == 4)
		{
			return_book(borrowed);
		}
		else if (user_choice == 5)
		{
			//���α׷� ����
			break;
		}
	}
	return 0;
}

// å�� �߰��ϴ� �Լ�
int add_book(char (*book_name)[30], char (*auth_name)[30], 
			 char (*publ_name)[30], int *borrowed, int *num_total_book)
{
	printf("�߰��� å�� ���� : ");
	scanf("%s", book_name[*num_total_book]);

	printf("�߰��� å�� ���� : ");
	scanf("%s", auth_name[*num_total_book]);

	printf("�߰��� å�� ���ǻ� : ");
	scanf("%s", publ_name[*num_total_book]);

	borrowed[*num_total_book] = 0; // �������� ����
	printf("�߰� �Ϸ�! \n");
	(*num_total_book)++;

	return 0;
}

// å �˻��ϱ�
int search_book(char (*book_name)[30], char (*auth_name)[30],
				char (*publ_name)[30], int num_total_book)
{
	int user_input; //������� �Է��� �޴´�
	int i;
	char user_search[30]; //����ڰ� �Է��� �˻���

	printf("��� ������ �˻� �� ���ΰ���? \n");
	printf("1. å ���� �˻� \n");
	printf("2. ������ �˻� \n");
	printf("3. ���ǻ� �˻� \n");
	scanf("%d", &user_input);

	printf("�˻��� �ܾ �Է����ּ��� : ");
	scanf("%s", &user_search);

	printf("�˻� ��� \n");

	if(user_input == 1)
	{
		for(i=0; i<num_total_book; i++)
			if(compare(book_name[i], user_search))
			{
				printf("��ȣ : %d // å �̸� : %s // ������ : %s // ���ǻ� : %s \n", i, book_name[i], auth_name[i], publ_name[i]);
			}
	}
	else if(user_input == 2)
	{
		for(i=0; i<num_total_book; i++)
			if(compare(auth_name[i], user_search))
			{
				printf("��ȣ : %d // å �̸� : %s // ������ : %s // ���ǻ� : %s \n", i, book_name[i], auth_name[i], publ_name[i]);
			}
	}
	else if(user_input == 3)
	{
		for(i=0; i<num_total_book; i++)
			if(compare(publ_name[i], user_search))
			{
				printf("��ȣ : %d // å �̸� : %s // ������ : %s // ���ǻ� : %s \n", i, book_name[i], auth_name[i], publ_name[i]);
			}
	}
	return 0;
	
}	

char compare(char *str1, char *str2)
{
	while (*str1)
	{
		if (*str1 != *str2)
		{
			return 0;
		}

	str1++;
	str2++;

	}

	if(*str2 == '\0')
		return 1;

	return 0;
}

int borrow_book(int *borrowed)
{
	int book_num; // ����ڷκ��� å��ȣ�� ���� ����

	printf("���� å�� ��ȣ�� �����ּ��� \n");
	printf("å ��ȣ : ");
	scanf("%d", &book_num);

	if(borrowed[book_num] == 1)
	{
		printf("�̹� ����� å�Դϴ�. \n");
	}
	else
	{
		printf("å�� ���������� ����Ǿ����ϴ�. \n");
		borrowed[book_num] = 1;
	}

	return 0;
}

int return_book(int *borrowed)
{
	int num_book; // �ݳ��� å�� ��ȣ

	printf("�ݳ��� å�� ��ȣ�� ���ּ��� \n");
	printf("å ��ȣ : ");
	scanf("%d", &num_book);

	if(borrowed[num_book] == 0)
	{
		printf("�̹� �ݳ��Ǿ� �ִ� �����Դϴ� \n");
	}
	else
	{
		borrowed[num_book] = 0;
		printf("���������� �ݳ��Ǿ����ϴ� \n");
	}

	return 0;
}
