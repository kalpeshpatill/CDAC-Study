#include<stdio.h>
int main()
{
	int a,b,n,c,p,q,j;
	printf("enter no of lines ");
	scanf("%d",&n);
	if(n%2==0)
	n++;
	for(a=1;a<=1;a+=2)
	{
		printf("\n"); 
		for(b=1;b<=(n-a);b++)
			printf(" ");
		for(j=1;b<=a;b++)
			printf("* ");
		
	}
	n--;
	for(c=n;c>=1;c-=2)
    {
    	printf("\n");
    	for(p=1;p<=n;p++)
    	printf("  ");
    	for(q=1;p<=n-p;q++)
    	printf("* ");
	}
	return 0;
}
