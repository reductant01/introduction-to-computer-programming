#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) //����� �μ� 
{
	int i, sum=0;
	
	for(i=1;i<=10;i++) //Ŭ���� ������غ��� �� (���� ������ �� ��� ����) (������Ʈ ���Ϸ� ������ ������ ������������) 
		sum += i;
	
	printf("i=%d, sum=%d\n",i,sum);
		
	return 0;
}
