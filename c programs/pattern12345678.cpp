#include<stdio.h>
int main()
{
	int i,j,space,rows;
//printf("enter the number of lines to print");
//scanf("%d",&rows);
	for(i=5;i>=1;i--)
	{ 
	for(space=1;space<=(5-i);space++)
	{ 
	printf(" ");
	}
	for(j=1;j<=(i);j++)
	  {
	  	printf("*");
	}
printf("\n");
	
}
}

