#include <stdio.h>

int main()
{
	int num1, num2;
	int sum;
	double avg;
	char grade;
	
	printf("ù��° ����:");
	scanf("%d",&num1);
	
	printf("�ι�° ����:");
	scanf("%d",&num2);
		
	sum=num1+num2;
	avg=sum/2.0;
	
	switch((int)avg/10)
	{
		case 10:
		case 9:
			grade='A';
			break;
		case 8:
			grade='B';
			break;		
		case 7:
			grade='C';
			break;
		case 6:
			grade='D';
			break;
		default:
			grade='F';
			
	}
	
	/*
	if(avg>=90)
		grade='A';
	else if(avg>=80)
		grade='B';	
	else if(avg>=70)
		grade='C';
	else if(avg>=60)
		grade='D';
	else
		grade='F';
	*/
			
	printf("����=%d\n",sum);		
	printf("���=%.1f\n",avg);
	printf("���=%c\n",grade);

	 
	 
}
