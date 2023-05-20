/* print the pattern

     *
    * *
   * * *
  * * * *
 * * * * *
* * * * * *

*/

#include<stdio.h>
int main()
{
	int a,b,n,c;
	printf("enter no of lines ");
	scanf("%d",&n);
	for(a=n;a>=1;a--)
	{
		printf("\n");
		//for(b=1;b<=n;b++) 
		for(b=1;b<=(a-1);b++)
		{
			//if(b<=(a-1))
			printf(" ");
		//	else
		//	printf("* ");
		}
		for(;b<=n;b++)
		{
			printf("* ");
		}
		
	}
	return 0;
}
