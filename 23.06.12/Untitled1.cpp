#include <stdio.h>

struct sangpum {
	char name[10];
	int pi;
	int po;
}; //����ü ����  

int main()
{
	int i;
	 
	//����ü ���� ���� �� �ʱ�ȭ  
	struct sangpum sv={"���",200,300};
	//����ü �迭 ���� �� �ʱ�ȭ 
	struct sangpum sa[3]={
		{"����",300,400},
		{"����",500,600},
		{"���",700,800}		
	};
	//����ü ������ ����
	struct sangpum *sp=sa; 
	
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
		printf("(*(sp+%d)).name=%s\n",i,(*(sp+i)).name);	
		printf("(*(sp+%d)).pi=%d\n",i,(*(sp+i)).pi);	
		printf("(*(sp+%d)).po=%d\n\n",i,(*(sp+i)).po);	
	} 
}
