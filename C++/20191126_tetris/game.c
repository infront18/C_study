#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y);

int main(void)
{
	char szChoice = 0;
	int x = 0, y = 0;
	while(TRUE)
	{
		gotoxy(x, y); //���� x�� y�� ����� ������ ��ǥ �̵�
		printf("��");
		if(kbhit())  //Ű���� ���� �Է¹޾Ҵٸ� 
		{
			szChoice = getch();
			switch(szChoice)
			{
				case 'w': //��
					y--; //y��ǥ 1����
					break;
				case 'a': //���� 
					x--; //x��ǥ 1����
					break;
				case 's' : //�Ʒ�
					y++; //y��ǥ 1����
					break;
				case 'd': //������
					x++; //x��ǥ 1����
					break; 
			}
			Sleep(50);
			system("cls");
		}
	}
	return 0;
}

void gotoxy(int x, int y)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
