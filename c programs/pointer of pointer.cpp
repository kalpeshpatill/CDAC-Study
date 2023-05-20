#include<stdio.h>
main()
{
	int a=10;
	int*p1=&a;
	int**p2=&p1;
	int***p3=&p2;
	 printf(" the value is %d\n",a);
	 
	  printf(" the value is %u\n",p1);
	  printf(" the value is %u\n",&a);
}
