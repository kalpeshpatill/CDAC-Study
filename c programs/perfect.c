#include<stdio.h>
void main()
{
    int n,f,a,b,i;
    printf("enter two no");
    scanf("%d%d",&a,&b);
    n=a;
	while(n<=b);
	{
		f=0;
		i=2;
		while(i<n)
		{
			if(n%i==0)
			{
				f=1;
				break;
			}
		}i++;
}
if(f==0)
printf("prime%d",n);
n++;

}
