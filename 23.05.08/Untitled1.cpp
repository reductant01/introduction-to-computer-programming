#include <stdio.h>

int main()
{
	int a[5];
	int i, j, temp; 
	
	for(i=0;i<5;i++)
	{
		printf("%d��° ���� : ",i+1);
		scanf("%d",a+i); //scanf("%d",&a[i]);		
	}
	//���� �� �迭�� ���� ��� 
	printf("\n");
	for(i=0;i<5;i++)
		printf("a[%d]=%d\n",i,a[i]);
	
	for(i=0;i<5;i++)//�� ������ �ܰ� 
	{
		for(j=0;j<5;j++)//�� ��ȯ�� Ƚ�� 
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;	
			}	
		}
	}	
	
	//���� �� �迭�� ���� ��� 
	printf("\n");
	for(i=0;i<5;i++)
		printf("a[%d]=%d\n",i,a[i]);
		
}
