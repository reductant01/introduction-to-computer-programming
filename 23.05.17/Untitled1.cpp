#include <stdio.h>
//void swap(int *, int *);
void swap(int , int );

int main()
{
	int num1, num2;
	
	printf("�� ���� �Է��ϼ���? ");
	scanf("%d%d",&num1,&num2);
	
	printf("===�Լ� ȣ�� �� ===\n");
	printf("num1=%d, num2=%d\n",num1,num2);
	
	//swap(&num1, &num2);
	swap(num1, num2);
	
	printf("\n===�Լ� ȣ�� �� ===\n");
	printf("num1=%d, num2=%d\n",num1,num2);
	
	
	
}

/*void swap(int *n1, int *n2)
{
	int temp;
	
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}*/
void swap(int n1, int n2)
{
	int temp;
	
	temp=n1;
	n1=n2;
	n2=temp;
}
