#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y);

int main()
{
	gotoxy(5,3);
	printf("A\n");
	printf("A�� ��µ� ���� X:5, Y:3 �Դϴ�.\n");
	return 0;
}

void gotoxy(int x, int y)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
