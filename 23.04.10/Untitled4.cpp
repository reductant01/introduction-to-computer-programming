#include <stdio.h>
int main()
{
	int n;
	
	//n���� 0�̸��̸� �ٽ� �Է¹ޱ� 
	while(1)//���ѷ��� 
	{
		printf("�ʿ��� ������ ������?");
		scanf("%d",&n);
		
		if(n>=0)
			break; //for���� �ƴѰ��� break���� �� �� 
		printf("�߸��� ������ �Է��߽��ϴ�.\n");	
		
	}
}
