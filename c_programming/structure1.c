//normal structure

#include<stdio.h>
#include<string.h>
struct book
{
	int pages;
	char author[30];
	float cost;
};
int main()
{
//b b={1,"nik",30.0};
struct book b1;
struct book *p=&b1;

int i;
	printf("enter pages author name amd cost of book\n");
	for(i=0;i<3;i++)
	{
		scanf("%d%s%f",&p->pages,p->author,&p->cost);
	}
	for(i=0;i<3;i++)
	{
//		printf("%d\n%s\n%f\n",b.pages,b.author,b.cost);
		printf("%d\n%s\n%f\n",p->pages,p->author,p->cost);
	}
}
