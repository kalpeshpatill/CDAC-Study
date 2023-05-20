#include<stdio.h>
main()
{ 
  int a=10,b=20;
  int*p;
  p=&a;
  
 // printf("Address %u\n ",&x);
  //printf("p is %u\n",p);
  //printf("x is %u\n",x);
  //printf("p is %u\n",p);
  printf(" the value is %d %d %d\n",a,b,*p);
  *p=89;
  p=&b;
  *p=65;
  printf(" the value is %d %d %d\n",a,b,*p);}
