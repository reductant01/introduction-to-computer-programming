#include <stdio.h>
int main()
{
	int i, sum=0;
	
	i=1;	//�ʱⰪ 
	while(i<=100)	//���ǽ� 
	{
		sum+=i;
		i++;	//������ 
	}
	printf("1~100������ ��:%d\n",sum);
	
}
