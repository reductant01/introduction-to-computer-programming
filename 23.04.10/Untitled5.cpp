#include <stdio.h>
int main()
{
	int i, n, sum;
	
	while(1)
	{
		printf("������ �Է��ϼ���: ");
		scanf("%d",&n);
		
		if(n==-1)
			break;
		
		sum=0;	
		for(i=1;i<=n;i++)
			sum+=i;
		printf("1~%d������ ���� %d\n",n,sum);
				
	} 
	printf("���α׷� ����!\n");
}
