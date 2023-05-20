#include<stdio.h>
int main()
{
	int a,b,n,c=0;
	printf("enter no of lines ");
	scanf("%d",&n);
	for(a=n;a>=1;a--)
	{
		c++;
		printf("\n"); 
		for(b=1;b<=(a-1);b++)
			printf(" ");
		for(;b<=n;b++)
			printf("%d ",c);
		
	}
	return 0;
}
