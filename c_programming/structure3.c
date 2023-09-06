#include<stdio.h>
struct date 
{
	int d;
	int m;
	int y;
};
struct emp
{
	int id;
	char name[10];
	struct date dob;
}emp;
int main()
{
	printf("enter employee details\n");
	scanf("%d%s",&emp.id,emp.name);
	printf("%d%s\n",emp.id,emp.name);
	printf("enter date of birth\n");
	scanf("%d%d%d",&emp.dob.d,&emp.dob.m,&emp.dob.y);
	printf("%d%d%d\n",emp.dob.d,emp.dob.m,emp.dob.y);
}
