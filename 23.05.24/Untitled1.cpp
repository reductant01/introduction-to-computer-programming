#include <stdio.h>
void x();

int main()
{
	int i;
	
	for(i=1;i<5;i++)
		x();
		
}

void x()
{
	static int n=1; //int n �� ��������, static int n �� ���� ���� ���� 
	
	printf("%2d",n++);
}
