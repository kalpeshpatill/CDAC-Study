#include<stdio.h>
int main()
{
	int i,j,num;
printf("enter the number of lines to print");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{ 
	  for(j=1;j<=num;j++)
	  {
	  	 if((i+j)<=num)
		   {
		   printf(" ");
		   }
	  	else
		{
		   printf("*");
	}
	  }
	printf("\n");
}
}
