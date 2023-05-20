#include<stdio.h>
int main()
{
	int a,b,i;
	printf("enter 2 number");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		if( a%2==1)
		{
			a=a+1;
		}
		for(i=a; i<=b; i=i+2){
		
		printf("%d \n",i);
	}
	}
	else
	{ 
	  if(a%2==1)
	  {
	  	a=a-1;
	  }
	   i=a;
	   while(i>=b)
	   {
	   	printf("%d \n",i);
	   	i=i-2;
}
}
}
	   
