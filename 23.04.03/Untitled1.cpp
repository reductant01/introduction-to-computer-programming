#include <stdio.h>

int main()
{
	int num;
	
	printf("���ڸ� �Է��ϼ���");
	scanf("%d",&num);
	
	switch(num%2)
	{
		case 0:
		{ //c������ �̰�� ��ȣ ��������, ������ c++�̱⿡ ���ư� 
			printf("%d:¦��",num);
			break; 
		}
		case 1:
			printf("%d:Ȧ��",num);	
			break; 
			
	}
	
}
