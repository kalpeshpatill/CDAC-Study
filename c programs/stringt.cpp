#include<stdio.h>
int main()
{
    int n,sum,p,q,i;
    printf("enter the 2 number");
    scanf("%d%d",&p,&q);
    n=p;
    while(p<=n)
    {
        sum=0;
        i=1;
        while(i<n)
        {
            if(n/i==0)
            {
                sum=sum+i;
            }
            i++;
            
        }
    }if(sum==n)
    {
        printf("perfect number between 2 nos is%d",sum);
    }
    n++;
}
