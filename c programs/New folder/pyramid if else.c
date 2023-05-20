/*print the pattern dymond

*/

#include<stdio.h>
int main()
{
	int a,b,n,m,c,d;
	printf("enter no of lines ");
	scanf("%d",&n);
	if(n%2==0)
	n++;
	for(a=n;a>=1;a--)
	{ 
		//if(a%2==1)
      	{
      		printf("\n");
	      for(b=1;b<=n;b++)
		   {
		    	if(b<=(a-1))
			     printf(" ");
			    else
			     printf("* ");
		   }
     	}
		
	}
	m=n;
	for(c=m;c>=1;c--)
	{
		//if(c%2==1)
      	{
      		printf("\n");
	      for(d=m;d>=1;d--)
		   {
		    	if(c<=d)
			     printf(" ");
			    else
			     printf("* ");
		   }
     	}
		
	}

	return 0;
}
