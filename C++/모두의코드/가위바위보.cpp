#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
int main()
{
    int num;
    int com;
    int comwin=0;
    int win=0;
    int zim=0;
 
    while(comwin==0)
    {
        printf("����1, ����2, ��3 :");
        scanf("%d",&num);
 
        srand((int)time(NULL));
        com=rand()%4;
 
        com=com+1;
 
        if(com==num)
        {
            printf("�����ϴ�.\n");
        }
        else if((com+num)%2==0)
        {
            if(com>num)
            {
                printf("��ǻ�Ͱ� %d,����� %d ��ǻ�Ͱ� �̰���ϴ�.\n",com,num);
                comwin=1;
                zim++;
            }
            else
            {
                printf("��ǻ�Ͱ� %d,����� %d ����� �̰���ϴ�.\n",com,num);
                win++;
            }            
        }
        else if((com+num)%2==1)
        {
            if(com>num)
            {
                printf("��ǻ�Ͱ� %d,����� %d ����� �̰���ϴ�.\n",com,num);
                win++;
            }
            else
            {
                printf("��ǻ�Ͱ� %d,����� %d ��ǻ�Ͱ� �̰���ϴ�.\n",com,num);
                comwin=1;
                zim++;
            }                    
        }
        
    }
    
    printf("%d�� %d��",win,zim);
}
 