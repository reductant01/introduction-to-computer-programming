#include <stdio.h>
#include <stdlib.h> //rand(), srand(), random()
#include <time.h>
#include <string.h>

void evalSrp(char [], char []);

char srp[][5]={"����","����","��"}; // �ѱ��� 2����Ʈ ���� 
char mySrp[5];
	

int main()
{
	int random;
	char retry;
	
	srand(time(NULL)); //������ ���� �Լ� 
	
	while(1)
	{
		printf("����? ����? ��? ");
		scanf("%s",mySrp);
		
		//��ǻ���� ����������	
		random=rand()%3; //0~2������ ���� 
		evalSrp(srp[random],mySrp);	
		
		fflush(stdin);
		
		printf("�Լ��ϽÁٽ��ϱ�(y/n) ");
		scanf("%c",&retry);
		
		if(retry=='y')
			continue;
		else
			break;	
		printf("���α׷� ����");
	}
	 
}
void evalSrp(char comp[], char me[])
{
	if(strcmp(me, "����")==0)
	{
			if(strcmp(comp,"����")==0)
			{
				printf("��:%s, ��ǻ��:%s\n",me,comp);
				printf("�����ϴ�.\n\n"); 
			}
			else if(strcmp(comp,"����")==0)
			{
				printf("��:%s, ��ǻ��:%s\n",me,comp);
				printf("���� �����ϴ�.\n\n"); 
			}
			else
			{
				printf("��:%s, ��ǻ��:%s\n",me,comp);
				printf("���� �̰���ϴ�.\n\n"); 
			} 
	}
	else if(strcmp(me,"����")==0)
	{
		if(strcmp(comp,"����")==0)
			{
				printf("��:%s, ��ǻ��:%s\n",me,comp);
				printf("���� �̰���ϴ�.\n\n"); 
			}
			else if(strcmp(comp,"����")==0)
			{
				printf("��:%s, ��ǻ��:%s\n",me,comp);
				printf("�����ϴ�.\n\n"); 
			}
			else
			{
				printf("��:%s, ��ǻ��:%s\n",me,comp);
				printf("���� �����ϴ�.\n\n"); 
			}
	}
	else if(strcmp(me,"��")==0)
	{
		if(strcmp(comp,"����")==0)
			{
				printf("��:%s, ��ǻ��:%s\n",me,comp);
				printf("���� �̰���ϴ�.\n\n"); 
			}
			else if(strcmp(comp,"����")==0)
			{
				printf("��:%s, ��ǻ��:%s\n",me,comp);
				printf("���� �����ϴ�.\n\n"); 
			}
			else
			{
				printf("��:%s, ��ǻ��:%s\n",me,comp);
				printf("�����ϴ�.\n\n"); 
			}
	} 
	else
	{
		printf("���������� ����!");
		exit(0); //���α׷� ���� ���� 
	}
	
}
