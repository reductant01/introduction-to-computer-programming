#include <stdio.h>
#include <stdlib.h> //exit�Լ��� ����ϱ� ���� 

int main()
{
	int num1, num2;
	double res;
	char opr;//�����ڸ� ����
	
	printf("ù ���� ���ڸ� �Է��ϼ���:");
	scanf("%d",&num1); 
	
	printf("�� ���� ���ڸ� �Է��ϼ���:");
	scanf("%d",&num2); 
	
	fflush(stdin); 
	
	printf("�����ڸ� �Է��ϼ���:");
	scanf("%c",&opr); 
	
	if(opr=='+')
	{
		res=num1+num2;
		printf("%d %c %d = %.0f\n",num1,opr,num2,res);
	
	}
	else if(opr=='-')
	{
		res=num1-num2;
		printf("%d %c %d = %.0f\n",num1,opr,num2,res);
	
	}
	else if(opr=='*')
	{
		res=num1*num2;
		printf("%d %c %d = %.0f\n",num1,opr,num2,res);
	
	}
	else if(opr=='/')
	{
		if(num2==0)
		{
			printf("0���� ���� �� �����ϴ�.");
			exit(0); //���α׷��� ���������� �����Ų��	
		} 
		else
		{
	
			res=(double)num1/(double)num2;
			printf("%d %c %d = %.1f\n",num1,opr,num2,res); //�Ҽ��� 2���� �ݿø� 
		}
	}
	else
		printf("������ ����!!\n");
	
	printf("���α׷� ����\n"); 
	
}
