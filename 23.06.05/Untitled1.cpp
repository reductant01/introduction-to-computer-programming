#include <stdio.h>

int main()
{
	int a=100, b=200;
	int *p1, *p2;
	
	p1=&a; //p1=a�� �����߻� 
	printf("p1=&a : a=%d,  p1=%d\n",a, p1);
	printf("p1=&a : a=%d, &p1=%d\n",a, &p1);
	printf("p1=&a : a=%d, *p1=%d\n",a, *p1);
	
	*p1=*p1+1; //(*p1)++�� ���� 
	printf("(*p)++ �� : a=>%d, *p1=%d\n",a,*p1);
	
	p2=p1;
	printf("p2=p1 �� : a=%d, *p1=%d, p2=%d\n", a,*p1,*p2);
	
	(*p2)++;
	printf("(*p2)++ �� : a=%d, *p1=%d, p2=%d\n", a,*p1,*p2);
	
	printf("%a=%u, &b=%u, b=%d\n", &a,&b,b);
	printf("p1=%u, p1-1=%u, *(p1-3)=%d\n", p1,p1-1,*(p1-3)); //p1=6487564�ϋ� p1-1=6487563�� �Ǵ°��� �ƴ϶� 6487560�� ���´�. (4����Ʈ�� ũ���̱� ����!) 
	
}
