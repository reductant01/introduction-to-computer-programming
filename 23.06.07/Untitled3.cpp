#include <stdio.h>

int main()
{
	char *str[4]={"korea", "japen", "china", "usa"};
	char **p=str; //�����������ΰ� Ȯ�� !!!
	
	int i,j;
	
	for(i=0;i<4;i++)
		printf("*p++=%s\n",*p++);
		
	p=str; //������ p�� �ּҰ� �ٲ�����Ƿ� �ʱ�ȭ �ʿ�!	
		
	for(i=0;i<5;i++)
	{
		printf("\n");		
		for(j=0;j<5;j++)
			printf("*(*(p+%d)+%d)=%c\n",i,j,*(*(p+i)+j));
		printf("\n");	
	}	
		
	
}
