#include <stdio.h>
#define PI 3.141592
#define CIRCUM(r) (2*PI*(r))
#define AREA(r) (PI*(r)*(r))
#define DATE(Y, M, D) Y ## M ## D

int main()
{
	int radius;
	
	printf("���� ������ radius(cm)�� ����?");
	scanf("%d",&radius);
	
	printf("���� �ѷ� %.2f(cm)�̰� \n",CIRCUM(radius));
	printf("���� ���̴� %.2f(cm)�Դϴ�\n",AREA(radius));
	printf("������� : %d\n", DATE(11, 06, 10));
}
