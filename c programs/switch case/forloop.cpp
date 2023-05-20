#include<stdio.h>
int main()
{
	int a=125,x;
	for(a;a>0;a=a/10){
    	x=a%10;
    	printf("%d \n",x);
	}
}

