#include <stdio.h>

int addition(int n);

int main()
{
	int n;
	
	printf("1~n������ �� n? ");
	scanf("%d", &n);
	
	printf("1~%d������ ���� %d�Դϴ�.",n,addition(n));
	 
}

int addition(int n)
{
	int result;
	
	if(n>1)
		result=addition(n-1)+n;
	else
		result=1;
		
	return(result);	
}
