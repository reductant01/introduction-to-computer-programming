#include <stdio.h>
//#define STR(A, B) "A�� B�� �ɹ��Դϴ�"
#define STR(A, B) #A"�� " #B"�� �ɹ��Դϴ�"

int main()
{
	puts(STR(�¾�, ���));
	puts(STR(����, �ҳ�ô�));
	
} 
