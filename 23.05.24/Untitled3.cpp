#include <stdio.h>
#include <stdlib.h> //rand(), srand(), random()
#include <time.h>
#include <string.h>

void evalSrp(int, int);

char srp[][5]={"����","����","��"}; // �ѱ��� 2����Ʈ ���� 
char mySrp[5];
int i=0, v=0, d=0, c=0;
	

int main()
{
	int random,nSrp;
	char retry;
	
	srand(time(NULL)); //������ ���� �Լ� 
	
	while(1)
	{
		printf("����? ����? ��? ");
		scanf("%s",mySrp);
		
		//����(0),����(1),��(2)�� ���� ��ȯ
		if(strcmp(mySrp,"����")==0)
			nSrp=0;	
		else if(strcmp(mySrp,"����")==0)
			nSrp=1;	
		else if(strcmp(mySrp,"��")==0)
			nSrp=2;
		else 
		{
			printf("�Է��� �߸��Ȱ� �����ϴ�.\n\n");
			continue;				 
		}				 
		
		//��ǻ���� ����������	
		random=rand()%3; //0~2������ ���� 
		evalSrp(random,nSrp);
		i++;	
		
		fflush(stdin);
		
		printf("�Լ��ϽÁٽ��ϱ�(y/n) ");
		scanf("%c",&retry);
		
		if(retry=='y')
		{	
			printf("\n"); 
			continue;
		}
		else
			break;	
		printf("���α׷� ����\n");
	}
	printf("��:%d, ��:%d, ��:%d, ��:%d\n",i,v,c,d);

	if(v>d)
		printf("���� �����¸�!");
	else if(v<d)	
		printf("��ǻ���� �����¸�...");
	else 
		printf("���� �Ȱ��׿�");
	 
}
void evalSrp(int comp, int me)
{
	if(comp==me)
	{
		printf("��ǻ��:%s, ��:%s\n",srp[comp], mySrp);
		printf("�����ϴ�.\n\n");
		c++;
	}
	else if(me==(comp-2) || me ==(comp+1))
	{
		printf("��ǻ��:%s, ��:%s\n",srp[comp], mySrp);
		printf("���� �̰���ϴ�.\n\n");
		v++;
	}
	else
	{
		printf("��ǻ��:%s, ��:%s\n",srp[comp], mySrp);
		printf("���� �����ϴ�.\n\n");
		d++;
	}
		
}
