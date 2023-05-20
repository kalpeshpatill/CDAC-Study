#include<stdio.h>
#include<string.h>
main()
{
	char str1[]= "welcome"; 
	char str2[]= "Welcome";
	int x;
	puts(str1);
	puts(str2);
	x=strcmp(str1,str2);
	printf("result %d",x);
	
}
