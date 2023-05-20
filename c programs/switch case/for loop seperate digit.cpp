#include<stdio.h>
int main()
{
     int a;
     int x;
	for(a=125; a>0; a/10)
	{
		x=a%10;
		printf("%d\n",x);
	}  
}
