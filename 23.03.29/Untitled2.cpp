#include <stdio.h>

int main()
{
	int kor, mat, eng;
	int sum=0;  //������ ������ �ʱ�ȭ�Ѵ� 
	double avg;
	
	char grade; //������ ������ ����
	
	printf("���������� �Է��ϼ���: "); 
	scanf("%d",&kor);
	
	printf("���������� �Է��ϼ���: "); 
	scanf("%d",&eng);	
	
	printf("���������� �Է��ϼ���: "); 
	scanf("%d",&mat);
	
	sum = kor + eng + mat;
	avg = sum/3.0; //(double)sum/3
	
	//����� ���Ѵ�
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
		
	//����� ����Ѵ�
	printf("����:%d\n",sum);
	printf("���:%.1f\n",avg);
	printf("���:%c\n",grade);
	
}
