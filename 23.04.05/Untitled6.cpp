#include <stdio.h>
int main()
{
	int i=1, sum=0;
	
	do{
		sum+=i;
		i++;
		
	}while(i<=100);
	printf("1~100�� ��:%d\n",sum);
}
