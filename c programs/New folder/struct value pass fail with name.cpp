#include<stdio.h>
void result(int m,int x)
{
  if(m>30)
  {
   printf("%d pass\n",x);
  }
  else
  {
  	printf("%d fail\n",x);
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
    result(s2.marks,s2.id);
	result(s1.marks,s1.id);
	
}
