#include<stdio.h>
main()
{
	int a;
	float b;
	char c;
	void *p;
	a=10;
	p=&a;
	printf("%d%d\n",a,*p);
	b=12.8;
	printf("%f%f",b,*p);
/*	int**p2=&p1;
	int***p3=&p2;
	 printf(" the value is %d\n",a);
	 printf(" the value is %u\n",p3);
	 printf(" the value is %u\n",**p2);
	 */
}
