#include<stdio.h>
void main()
{
    int n,f,a,b,i;
    printf("enter two no");
    scanf("%d%d",&a,&b);
    n=a;
   while(n<=b);
   {
	//n=5;
		f=0;
		i=2;
		while(i<n)
		{
			if(n%i==0)
			{
				f=1;
				break;
			}i++;
		}n++;
   }
if(f==0)
{
    printf("prime");
}
else { printf("not prime");
}
}

