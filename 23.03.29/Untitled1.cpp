#include <stdio.h>

int main()
{
	int num;
	
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d",&num);
	
	if(num%2==0)
		printf("%d��(��) ¦���Դϴ�\n",num);
	else
		printf("%d��(��) Ȧ���Դϴ�\n",num);
	
}
