#include <stdio.h>

int main()
{

	char name[6]={'P','u','s','a','n','\0'};
	char str[6]="Seoul";
	char city[20];
	
	printf("����? ");
	//scanf("%s",city); //scanf("%s",&city[0]) �ȵ� 
	gets(city);
	
	printf("%s\n",name);
	printf("%s\n",str+2); //str�� 3�������� ��� 
	printf("%c\n",str[2]); //printf("%s\n",str[2]);�� ���� �߻�
	
	//printf("%s\n",city); 
	puts(city);
}
