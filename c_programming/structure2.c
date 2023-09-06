#include<stdio.h>
struct book
{
	int pages;
	char author[30];
	float price;
};
//static struct book b[3];
int main()
{
	const struct book b[3]={1,"nik",3.0};
	int i;//struct book *ptr=&b;
	printf("enter details of a book\n");
	/*for(i=0;i<3;i++)
	{
	scanf("%d%s%f",&b[0].pages,b[0].author,&b[0].price);
	}*/
	for(i=0;i<3;i++)
	{
	printf("%d\n%s\n%f\n",b[0].pages,b[0].author,b[0].price);
	}
}
