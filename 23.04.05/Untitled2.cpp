#include <stdio.h>
int main()
{
	int dan, num, res;
	
	printf("���� �Է��ϼ���: ");
	scanf("%d",&dan);
	
	for(num=1; num<=9; num++)
	{
		res=dan*num;
		printf("%d x %d = %d\n",dan,num,res); //\t�� �� 
	}
	
}
