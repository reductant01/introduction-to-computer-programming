#include <stdio.h>
int main()
{
	int i, sum=0;
	
	/*for(i=1;;i++)
	{
		sum+=i;
		if(sum>=10)
			break;
	}*/
	
	for(i=0, sum=0; sum<10; sum+=i)
	{
		i++;
	}
	
	
	printf("���� 10�� �Ѿ��� ���� ��:%d\n",i);
	printf("1~%d������ ��: %d\n",i,sum);
	
	
}
