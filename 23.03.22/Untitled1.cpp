#include <stdio.h>
int main()
{
	int age;
	char gender;
	double height;
	 
//	printf("������? (���� = M, ���ڴ�= F)"); �����߻� ���� ���� 
//	scanf("%c", &gender);

	printf("���̴�?");
	scanf("%d", &age);
	
	printf("Ű��?");
	scanf("%lf", &height);
	
	fflush(stdin); //Ű���� ������ ������ ��������! 
	
	printf("������? (���� = M, ���ڴ�= F)"); //Ű���� ���ۿ� �����  enterŰ�� ���ڷ� �Է¹��� (����!) 
	scanf("%c", &gender);
	
	printf("���� : %c\n", gender); 	
	printf("���� : %d��\n", age); 
	printf("Ű : %.1fcm\n", height); 		
	
	
}
