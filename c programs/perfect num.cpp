#include<stdio.h>
int main()
{
    int sum,i,n,p,q;
    printf("enter two no");
    scanf("%d%d",&p,&q);
		n=p;
		while(n<=q)
		{
		sum=0;
		 i=1;
		}
        while(i<n)
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
            i++;
            
        }
          if(sum==n)
         {
        printf("perfect no %d",sum);
         }
    n++;
}
