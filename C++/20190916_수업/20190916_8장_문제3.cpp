#include <stdio.h>

int main()
{
	int Kor, Eng, Math;
	double Avr;

	printf("����, ����, ���� ������ ������ �Է��Ͻÿ�. : ");
	scanf("%d %d %d", &Kor, &Eng, &Math);

	Avr = (Kor+Eng+Math) / 3.0;
	printf("��� : %f \n", Avr);


	if (Avr >= 90.0)
		printf("A���� \n");
	
	else if(Avr >= 80)
		printf("B���� \n");
	
	else if(Avr >= 70)
		printf("C���� \n");
	
	else if(Avr >= 50)
		printf("D���� \n");
	
	else
		printf("F����");
	
	return 0;
}