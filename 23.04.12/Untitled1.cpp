#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	
	for(i=1;i<=100;i++)
	{
		for(j=1;j<=10;j++)
		{
			if(kbhit()) // Ű���� �Է½� �۵� 
				goto end;
			printf("#");
		}
		printf("\n");
	}
	printf("\n���α׷��� �����մϴ�.\n");
	exit(0); //return0 �� ������, �޹����� �������� �ʰ� ���� 
	
 end:
	printf("\nŰ���带 ���Ƚ��ϴ�.");
		
	return 0;	
}
