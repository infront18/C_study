#include<stdio.h>
#include<Windows.h>
#include<conio.h> 

void gotoxy(int x, int y){ 
 COORD pos;
 pos.X = x; pos.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

int main(int argc, char *argv[]){
    COORD pos={0,0};
    int ch;
    int i,j;
    for(i=0;i<10;i++){ //�ʼ���
        for(j=0;j<10;j++){
            printf("��");
        }
        printf("\n");
    }
    gotoxy(pos.X,pos.Y); //game ��������
    printf("��");
    
    while(1){
        
        if(kbhit()){
            ch=getch();
/*          switch(ch){
                case 97:printf("���� %c\n",ch); break; 
                case 100:printf("������ %c\n",ch); break;
                case 119:printf("���� %c\n",ch); break;
                case 115:printf("�Ʒ��� %c\n",ch); break;
            }
*/
            gotoxy(pos.X,pos.Y); //���� ���� �̵� ��ǥ �ʱ�ȭ
            printf(" ");

            switch(ch){
                case 97:pos.X-=2; break; 
                case 100:pos.X+=2; break;
                case 119:pos.Y-=1; break;
                case 115:pos.Y+=1; break;
            }
            if(pos.X<0)pos.X=0;
            else if(pos.X>20)pos.X=20;
            if(pos.Y<0)pos.Y=0;
            else if(pos.Y>10)pos.Y=10;
        
            gotoxy(pos.X,pos.Y); //���ο� �̵� ��ǥ ����
            printf("��");                                    
        }   
    }
    return 0;
}
