#include <stdio.h>
#include <ctype.h>  //toupper, tolower �Լ� 
#include <string.h>

int main()
{
	char s[100],*p;
	int i;
	
	printf("���ڿ��� �Է��ϼ���: ");
	gets(s);
	
	p=s;
	
	while(*p!='\0')
	{
		*p=toupper(*p); //�빮�ڷ� ��ȯ��Ű�� �Լ� 
		p++;	//���⼭ p+i�� �ƴ� p���� �����������Ƿ� p�� ����ϸ� �ƹ����� �ȳ��� 
	}
	
	printf("\n�빮�ڷ� ��ȯ�� ���: %s\n",s); //s�� ����ϴ°� Ȯ��!, p�� ����ϱ����ؼ��� p=s�� �ʱ�ȭ �� �ʿ䰡 ���� 
	
	for(i=0;i<strlen(s);i++)
	{
		s[i]=tolower(s[i]); //�ҹ��ڷ� ��ȯ��Ű�� �Լ� 
	}
	 
	printf("\n�ҹ��ڷ� ��ȯ�� ���: %s\n",s);
}
