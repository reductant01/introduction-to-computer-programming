#include <stdio.h>

typedef struct sangpum {
	char name[10];
	int pi;
	int po;
}SANGPUM; //����ü ����  
//typedef struct sangpum SANGPUM;

int main()
{
	int i;
	 
	//����ü ���� ���� �� �ʱ�ȭ  
	SANGPUM sv={"���",200,300};
	//����ü �迭 ���� �� �ʱ�ȭ 
	SANGPUM sa[3]={
		{"����",300,400},
		{"����",500,600},
		{"���",700,800}		
	};
	//����ü ������ ����
	SANGPUM *sp=sa; 
	
	//����ü ���� ����  
	printf("====����ü ���� ����====\n");
	printf("sv.name=>%s\n",sv.name);
	printf("sv.pi=%d\n",sv.pi);
	printf("sv.po=%d\n",sv.po);
	
	//����ü �迭 ����
	printf("\n====����ü �迭 ����====\n"); 
	for(i=0;i<3;i++)
	{
		printf("sa[%d].name=>%s\n",i,sa[i].name);
		printf("sa[%d].pi=>%d\n",i,sa[i].pi);
		printf("sa[%d].po=>%d\n\n",i,sa[i].po);
	}
	
	//����ü ������ ���� 
	printf("====����ü ������ ����====\n");
	for(i=0;i<3;i++)
	{
		printf("sp->name=>%s\n",sp->name);	
		printf("sp->pi=>%d\n",sp->pi);	
		printf("sp->po=>%d\n\n",sp->po);	
		
		sp++;
	} 
}
