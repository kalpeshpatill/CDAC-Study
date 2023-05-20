#include<stdio.h>
void test(int *m,char *x)
{
  if(m>30)
  {
   printf("%s pass\n",x);
  }
  else
  {
  	printf("%s fail\n",x);
  }
}
struct student
{
	int id;
	char name[30];
	int marks;
}s1={101,"kalpesh Patil",30};
int main()
{
	struct student s2={105,"jay",100};
	printf("id of s1 is %d\n",s1.id);
	printf("marks of s1 is %d\n",s1.marks);
	printf("id of s1 is %s\n",s1.name);
	printf("id of s2 is %d\n",s2.id);
	printf("name of s2 is %s\n",s2.name);
    test(s2.marks,s2.name);
	test(s1.marks,s1.name);
	
}
