/* ������ ����*/
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int rand_x = 0; //���������Ͽ� gotoxy�� Ŀ�� �̵����Ѽ� ���� ���� ���Ѱ�
int rand_y = 0;
int speed = 150; // ������ ���ǵ带 ����

unsigned char body[1823]; 
// ������ �� ��ǥ(�� 1823ĭ)�� �ش��ϴ� ���� ������ ���� ���翩�θ� üũ�ϱ� ���Ͽ�
//  ������ �Ӹ��� ���뿡 �ھ��� ��� ������ �Ӹ� ��ġ�� ������ġ�� ��ġ�� ���� üũ�ϱ� ���Ѱ�
//  1823 = (y)*76 + x (y�ִ밡 75�̰� x�ִ밡 23) 
unsigned int remove_tail_check[75*23];
// �������� ������ �������� �κ�(������� �� �κ�)�� üũ�ϱ� ���� �迭�� �迭�� ������ ���� ��ǥ�� �����
//  point_head�� point_tail�� �����ͷ� �����

int point_head; 
// remove_tail_check�� �����ͷ� ����
//�������� ���� Ŀ�������� �����͸� 1�� ������Ű�鼭 �����Ͱ� ����Ű�� ������ ������ �߰��Ǵ�(���̸� �Ծ) ������ ���� ��ġ���� ��Ÿ��
int point_tail;
// remove_tail_check�� �����ͷ� ����
//�������� ����(������ �������� �κ�)�� üũ�Ͽ� �����ֱ� ���� ������
//�����̰� �����϶����� point_tail�� ����Ű�� �κп� ����� ���� ��ǥ�� ���� �װ��� ������ ������ ����

void gotoxy(int x, int y){ //����x, ����y ��ǥ�� Ŀ���� �̵���Ű�� �Լ�
 COORD Pos = {x -1, y-1};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}

void back_round(){  // �� �Լ��� ���Ӹ��� �ܰ����� ǥ���ϱ� ���Ѱ�
 unsigned char a = 0xa6;
 int i,j;
 int x=39;
 int y=24;
 /************* �� ���� �׸���*********************/
 printf("%c%c",a,0xa3);
 for(i=0;i<x-2;i++)printf("%c%c",a,0xa1);
   printf("%c%c\n",a,0xa4);

 /************* �߰� �׸���************************/
 for(j=0;j<y-2;j++){
  printf("%c%c",a,0xa2);
  for(i=0;i<x-2;i++)printf("  ");
    printf("%c%c",a,0xa2);
  printf("\n");
}
 /************* �� �ش� �׸���*********************/
printf("%c%c",a,0xa6);
for(i=0;i<x-2;i++)printf("%c%c",a,0xa1);
 printf("%c%c\n",a,0xa5);
}
// ���� 37ĭ, ���� 22ĭ 

void game_option(){ // ���ӿɼ� ����(���ǵ�)�� ���� �Լ�
 while(1){
  int nan = 10;
  system("cls");
  gotoxy(1,1);
  printf("���ڰ� �������� ���̵��� �����ϴ�\n");
  printf("������ ���̵��� �����ϰ� ����Ű�� ��������(1~6) :");
  scanf("%d",&nan);
  if(nan == 1){
   speed = 150;
 }else if(nan == 2){
   speed = 140;
 }else if(nan == 3){
   speed = 130;
 }else if(nan == 4){
   speed = 120;
 }else if(nan == 5){
   speed = 110;
 }else if(nan == 6){
   speed = 100;
 }else{
   printf("1~6������ ���ڸ� �Է��ϼ���!\n");
   Sleep(300);
   continue;
 }
 system("cls");
 break;
}
}

int main(){
 unsigned char start = 2; // ���� ��ŸƮ�� üũ�ϱ� ���� ����
 int x,y; //���� ���� : x, ���� ���� : y
 int ago_x; // �������� ���� ������ ���ֱ� ���� ��ǥ���� �ӽ� �����ϱ����� ����
 int ago_y;
 int body_number; //�����̰� �ø� ���� ���� ����Ŵ
 unsigned char chr; // ����Ű�� Ű���� �ޱ����� ����
 srand(time(NULL)); // ���� �ʱ�ȭ ����

 while(1){
  /*********** ���� �ʱ�ȭ ***************/
  ago_x = 3;
  ago_y = 2;
  chr = 99;
  point_head = 1;
  point_tail = 0;
  body_number = 1;
  memset(body,0,1823);
  memset(remove_tail_check,0,1725);
  remove_tail_check[0] = 155;

  /*************  ������ �ʱ�ȭ�� **********************/
  printf("������ �����Ϸ��� 1�� �����ÿ�\n");
  printf("������ �����Ϸ��� 0�� �����ÿ�\n");
  start = getch();
  if(start == '0'){
   break;
 }else if(start != '1'){
   continue;
 }
  game_option(); //������ ���ǵ� ����
  gotoxy(1,1);
  back_round();  //���Ӹ� �ܰ��� �׸���
  rand_x = ((rand()%37))*2+3; //���������Ͽ� ���հ��� ��ǥ�� ����
  rand_y = (rand()%22)+2;
  gotoxy(rand_x, rand_y);  
  printf("��");   //���հ��� ��ǥ�ΰ��� ���̸� ��Ÿ��
  x=3;  // �������� ���� ���� ��ǥ�� ��Ÿ��
  y=2;
  gotoxy(x,y);
  while(1){
   if(kbhit() != 0){  //�ƹ�Ű�� �Է¹޾����� if���� ������
    chr = getch();
    if(chr == 0 || chr == 0xe0){
     chr = getch();
   }
 }
   if(chr == 72){ //����Ű '��' �Է¹�����
    y -= 1;
  if(y<2){
     system("cls"); // ȭ���� ������ �����
     gotoxy(30,10);
     printf("GAME OVER\n");
     break;
   }
   }else if(chr == 80){ //����Ű '��' �Է¹�����
   y += 1;
   if(y > 23){
     system("cls");
     gotoxy(30,10);
     printf("GAME OVER\n");
     break;
   }
   }else if(chr == 75){ //����Ű '��' �Է¹�����
    x -= 2; // �׸�� Ư������(2byte)�̹Ƿ� ���δ� 2ĭ�� �̵��ؾ���
    if(x<3){
     system("cls");
     gotoxy(30,10);
     printf("GAME OVER\n");
     break;
   }
   }else if(chr == 77){ //����Ű '��' �Է¹�����
   x += 2;
   if(x > 75){
     system("cls");
     gotoxy(30,10);
     printf("GAME OVER\n");
     break;
   }
 }
   if((x == rand_x)&&(y == rand_y)){ // ���̸� �Ծ��� ��� 
    //������ ����Ͽ� ���ο� ���̸� �ʿ� ǥ����
    rand_x = ((rand()%37))*2+3;
    rand_y = (rand()%22)+2;
    gotoxy(rand_x, rand_y);
    printf("��"); //������ ���� �׸�

    //�Ʒ� �ڵ�� �����̰� ���̸� �Ծ����Ƿ� ������ �߰��� ���� ��ǥ�� �߰��ϰ� �������� ������ǥ�� �߰��ϴ� ��
    //���̸� ���� ��쿡�� ���� ���븦 �����ʿ�����Ƿ�(���� �þ��) �̿� ���� �ڵ�� ����, 
    //�׷��� if�� ������ �ٷ� �ݺ���(while)�� ���ǹ����� �̵���
    remove_tail_check[point_head] =  (y)*76 + x; // �������� ���븦 ����ǥ������ �߰�
    point_head++;
    if(point_head >= 1656)point_head = 0;
    body[(y)*76 + x] = 1; //���� ��ǥ �߰�(1�� ������ �ִٴ� ǥ��, 0�� ������ ���ٴ� ǥ��)
    body_number++;
    if(body_number >= 10){
     speed -= 10;
     if(speed < 40)speed = 40;
     body_number = 0;
   }
   continue;
 }

   //������ ������ ������ ����� ���� �ڵ���
   ago_y = remove_tail_check[point_tail]/76;  //ago�� �ӽ�����
   ago_x = remove_tail_check[point_tail]%76;
   if(ago_x == 0)ago_x = 75;
   gotoxy(ago_x,ago_y);
   printf("%c%c",0x00,0x00);
   body[remove_tail_check[point_tail]] = 0; //�����̰� ������ ��ǥ�� ���� �������� �����Ƿ� ������ǥ���� ����
   point_tail++;
   if(point_tail >= 1656)point_tail = 0;

   //������ �Ӹ��� ���� �������� ������ �Ӹ��� ������ �׷��ֱ� ���� �ڵ���
   remove_tail_check[point_head] =  (y)*76 + x;
   if(body[remove_tail_check[point_head]] == 0){ //������ �Ӹ��� ���� ���� ������ ������ ���� ���
    body[remove_tail_check[point_head]] = 1;
   }else{     //������ �Ӹ��� ������ǥ�� ������ ����, gameover��
    system("cls");
    gotoxy(30,10);
    printf("GAME OVER\n");
    break;
  }
  point_head++;
  if(point_head >= 1656)point_head = 0;


  gotoxy(x,y); 
   printf("��"); //������ �Ӹ��� �׸���

   Sleep(speed); // ������ ���ǵ� ����
 }
}
}


