#include<stdio.h>
#include<string.h>
struct dob
	{
		int d,m,y;
//		struct doj month;
	};
//struct doj
//{
//int p,q,r;
//};
 struct student
{
	int id;
	char name[10];
	struct dob date;
};
int main()
{
	struct student p;
	p.id=90;
	printf("%d\n",p.id);
	struct student *ptr=&p;
	strcpy(ptr->name,"nikhi");
	printf("%s\n",ptr->name);
	printf("enter the id and name\n");
	scanf("%d %s",&ptr->id,ptr->name);
	printf("%d %s\n",ptr->id,ptr->name);
	printf("enter dob\n");
	scanf("%d-%d-%d",&ptr->date.d,&ptr->date.m,&ptr->date.y);
//	printf("enter dob\n");
//	scanf("%d-%d-%d",&ptr->date.month.p,&ptr->date.month.q,&ptr->date.month.r);
	//printf("dob\n");

//	printf("%d-%d-%d",ptr->date.month.p,ptr->date.month.q,ptr->date.month.r);
//	printf("doj\n");
	printf("%d-%d-%d",ptr->date.d,ptr->date.m,ptr->date.y);
}
