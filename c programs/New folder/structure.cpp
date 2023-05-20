#include<stdio.h>
struct student
{
	int id;
	char name[30];
	int marks;
}s1={101,"kalpesh Patil",34};
int main()
{
	struct student s2={105,"jayu",100};
	printf("id of s1 is %d\n",s1.id);
	printf("marks of s1 is %d\n",s1.marks);
	printf("id of s1 is %s\n",s1.name);
	printf("id of s2 is %d\n",s2.id);
	printf("name of s2 is %s\n",s2.name);
	
	
}
