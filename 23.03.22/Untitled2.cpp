#include <stdio.h>
int main()
{
	int num;
	
	printf("����?");
	scanf("%d", &num);
	
	if(num%2==0) //%�� �������� ���ϴ� ������ 
		printf("%d��(��) ¦��!", num);
	else
		printf("%d��(��) Ȧ��!", num);
			
	
}
