#include <stdio.h>

int main()
{
	int array[][3]={{10,20,30},{40,50,60}};  
	//int **p=array; , array�� ������ �迭�� �θ� �����߻�
	int *p=array[0]; //p�� 1�������� �˾Ƶ��� 
	int i,j;
	
	for(i=0;i<6;i++)
		printf("*(p+%d)=%d\n",i,*(p+i));
	
 } 
