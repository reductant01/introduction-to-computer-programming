#include <stdio.h>

int main()
{
	int array[][3]={{10,20,30},{40,50,60}};  
	//int **p=array; , array�� ������ �迭�� �θ� �����߻�
	int (*p)[3]=array; //p�� 2���� �迭�� �Ҵ��ϴ� ���! 
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
			printf("*(*(p+%d)+%d)=%d\n",i,j,*(*(p+i)+j));
		printf("\n");	
	}
	
 } 
