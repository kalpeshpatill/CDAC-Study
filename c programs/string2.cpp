#include <stdio.h>
#include <conio.h>
main()
{
    char ch;
    int v;
    printf("enter the char");
    scanf("%c",&ch);
    if(ch>'0'&&ch<='9')
    {
    	v=ch-'0';
    	v=v*v;
    	printf("%d",v);
    }
    else
    printf("wrong input");
	}


