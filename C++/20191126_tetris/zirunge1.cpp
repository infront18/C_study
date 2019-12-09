#include<Windows.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<time.h>
#include<queue>

// ���� ũ�� N*N ���簢��
#define MAX_N 10 

#define RIGHT 77
#define DOWN 80
#define LEFT 75
#define UP 72

using namespace std;

struct WORM {
	// ��ǥ
	int x, y; 
	// �����̴� ����
	int next_way; 
	// �Ծ��� �ȸԾ���
	bool eat; 
};

// ������ �����̱�
bool wriggle(int(*board)[MAX_N], queue<WORM> &del_tail, WORM &bfw);
// �ʱ⼳��
void init(int(*board)[MAX_N], queue<WORM> &del_tail, WORM &bfw);
// ���� ���� ����
void food(int(*board)[MAX_N]); 
// ���� ȭ��
void draw(int board[][MAX_N]); 
// �Է�
int input(int way); 
// ���ΰ���
void game(); 

int main() {
	game();
	system("cls");
	printf("\n\n\ngame over\n\n\n\n");
	return 0;
}

void game() {
	// ���� ����
	int board[MAX_N][MAX_N] = { 0 };
	// ���� ����
	bool flag = true; 
	// ������ �ӵ�
	int speed = 300; 

	// ������ ����ϴ� ť
	queue<WORM> del_tail; 
	// �Ӹ� �κ� ��ǥ
	WORM bfw;	

	init(board, del_tail, bfw);

	draw(board);

	while (flag) {
		bfw.next_way = input(bfw.next_way);
		flag = wriggle(board, del_tail, bfw);
		draw(board);

		// ������
		Sleep(speed); 
		// ������ ����
		speed = speed - 1 > 100 ? speed - 1 : speed; 
	}

}

void init(int(*board)[MAX_N], queue<WORM> &del_tail, WORM &bfw) {
	// ��,��,��,�� (�ð����)
	int way[4][2] = { { -1,0 },{ 0,1 },{ 1,0 },{ 0,-1 } };

	bfw.x = 0, bfw.y = 0, bfw.next_way = 1, bfw.eat = false;

	board[bfw.y][bfw.x] = 1;
	del_tail.push(bfw);

	// ���� 4¥�� ������
	for (int i = 0; i < 4; i++) { 
		bfw.x += way[bfw.next_way][1], bfw.y += way[bfw.next_way][0];
		board[bfw.y][bfw.x] = 1;
		del_tail.push(bfw);
	}

	food(board);
}


int input(int way) {
	int next_way = way;
	
	// Ű���尡 ������
	if (_kbhit()) {  
		int key = _getch();
		if (key == 0xE0 || key == 0) {
			key = _getch();

			switch (key) {
			case UP:
				// ���ֺ��� �������δ� ��������
				if (way != 2) 
					next_way = 0;
				break;
			case RIGHT:
				if (way != 3)
					next_way = 1;
				break;
			case DOWN:
				if (way != 0)
					next_way = 2;
				break;
			case LEFT:
				if (way != 1)
					next_way = 3;
				break;
			default:
				break;
			}
		}
	}
	return next_way;
}

bool wriggle(int(*board)[MAX_N], queue<WORM> &del_tail, WORM &bfw) {
	
	// ���� �ð����� map[y][x] 
	int way[4][2] = { { -1,0 },{ 0,1 },{ 1,0 },{ 0,-1 } }; 

	// ������
	bfw.y += way[bfw.next_way][0], bfw.x += way[bfw.next_way][1]; 

	if (bfw.y < 0 || bfw.y >= MAX_N || bfw.x < 0 || bfw.x >= MAX_N // ���� ��ų�
		|| board[bfw.y][bfw.x] == 1)	// �����̸��� ������
		return false;  //���ӿ���

	// ������ ����
	if (board[bfw.y][bfw.x] == 2)
		bfw.eat = true, food(board); 

	board[bfw.y][bfw.x] = 1;
	del_tail.push(bfw);

	if (!bfw.eat) {
		WORM cur = del_tail.front();
		del_tail.pop();
		board[cur.y][cur.x] = 0;
	}

	bfw.eat = false;
	return 1;
}

void food(int(*board)[MAX_N]) {
	
	// ��ĭ ���� ���� , ������ ���庯��
	int cnt = 0, ra;
	// ��ĭ�� �����ϴ� �����͹迭
	int *p[MAX_N*MAX_N]; 

	for (int i = 0; i < MAX_N; i++)
		for (int j = 0; j < MAX_N; j++)
			if (board[i][j] == 0)
				p[cnt++] = &board[i][j];

	srand(time(NULL));
	ra = rand() % cnt;
	*p[ra] = 2;
}

void draw(int board[][MAX_N]) {

	system("cls"); 

	for (int i = 0; i < MAX_N; i++) {
		for (int j = 0; j < MAX_N; j++)

			switch (board[i][j]) {
			// ������ ��
			case 1: 
				printf("@ ");
				break;
			//����
			case 2: 
				printf("* ");
				break;
			//���
			default:
				printf(". ");
				break;
			}

		printf("\n");
	}
}