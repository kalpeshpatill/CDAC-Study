/*print the pattern  
 
    *

  * * *

* * * * *

*/

#include<stdio.h>
int main()
{
	int a,b,n,c;
	printf("enter no of lines ");
	scanf("%d",&n);
	if(n%2==0)
	n++;
	for(a=n;a>=1;a--)
	{
		printf("\n"); 
		if(a%2==1)
      	{
	      for(b=1;b<=n;b++)
		   {
		    	if(b<=(a-1))
			     printf(" ");
			    else
			     printf("* ");
		   }
     	}
		
	}
	

	return 0;
}
