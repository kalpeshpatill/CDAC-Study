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
	struct student *p1;
	struct student *p2;
	
	p1=&s1;
    p2=&s2;
	printf("id of s1 is %d\n",p1->id);
    printf("marks of s1 is %d\n",p1->marks);
	printf("id of s1 is %s\n",p1->name);
    printf("id of s2 is %d\n",p2->id);
    printf("name of s2 is %s\n",p2->name);
}
