#include<stdio.h>
 static struct student
{
	int id;
	char name[10];
}s;
int main()
{
	//struct student s;
	printf("enter the id and name\n");
	scanf("%d %s",&s.id,s.name);
	printf("%d %s\n",s.id,s.name);
}
