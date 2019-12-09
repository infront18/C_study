/*
1. ���α׷� ����� �ٷ� ������ ����.
2. printf�� ���ؼ� ���� �Ұ��� ���̵带 ������ �����ְ�, 
   scanf�� ���� ������� �Է��� �����մϴ�.
3. 1���� ������ �ֻ����� ������, 2���� ������ ����ڿ� ��ǻ�Ͱ� ���� �ֻ��� ���� ���� �����ݴϴ�.
   1,2�� �̿ܿ� �ٸ� ���� �Է��ϸ� �ٽ� �Է��ϵ��� ����ϴ�.
4. ����ڳ� ��ǻ�Ͱ� �ֻ����� ���� ������ ������ Ư�� ������ ���� ���� �����մϴ�.
5. �ֻ����� 3�� ���� ������ ������ ����ڿ� ��ǻ�Ͱ� ���� �ֻ��� ���� ���� �����ְ�,
   ���и� ���� �����ϴ�.   
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void checkScore(int mScore, int cScore) {
  printf("\n-------------------------");
  printf("\n���� �� �÷��̾��� �����Դϴ�.");
  printf("\n�÷��̾��� ���� : %d", mScore);
  printf("\n��ǻ���� ���� : %d", cScore);
  printf("\n-------------------------");
}

void showEnding(int mScore, int cScore)
{
  if (mScore < cSore)
    printf("��ǻ�� �¸��Դϴ�.");
  else if(mScore == cScore)
    printf("���º��Դϴ�.");
  else
    printf("����� �¸��Դϴ�.");
}


int main() {
  int diceCount = 0;
  int diceEnd = 3;
  int mScore = 0;
  int cScore = 0;
  int selection;
  srand(time(NULL));

  printf("���� ���� : �ֻ����� �� 3 �� ���� ��ģ �ֻ��� ���� ���� �� ���� ����� �̱�� �˴ϴ�.");
  printf("\n�ֻ��� ������ �����ϰڽ��ϴ�.");
  printf("\n------------------------");

  while(diceCount < diceEnd) {
    printf("\n�ֻ����� �����ּ���. 1�� �ֻ��� ������ 2�� ���� ���� �� Ȯ���ϱ� : ");
    scanf("%d", &selection);
    
    if(selection == 1) {
      int mResult = (rand() % 6) + 1;
      int cResult = (rand() % 6) + 1;
      
      mScore += mResult;
      cScore += cResult;
      
      printf("\n�÷��̾��� �����Դϴ�. �ֻ����� �����ϴ�.");
      printf("\n�층! �ֻ����� ���� %d �Դϴ�.", mResult);
      printf("\n���� �� ������ %d �Դϴ�.", mScore);
      
      printf("\n��ǻ���� �����Դϴ�. �ֻ����� �����ϴ�.");
      printf("\n�층! �ֻ����� ���� %d �Դϴ�.", cResult);
      printf("\n���� �� ������ %d �Դϴ�.", cScore);
      
      diceCount++;
    } else if(selection == 2) {
      checkScore(mScore, cScore);
    } else {
      printf("\n�߸� �Է��ϼ̽��ϴ�.");
    }
  }
  showEnding(mScore, cScore);
 
  return 0;
}

