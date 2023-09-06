#include<stdio.h>
static int a=0,b=0;
static int sum(int,int);
int main()
{
	//static int a,b;
	printf("enter the values of a and b\n");
	scanf("%d%d",&a,&b);
	sum(a,b);
	//printf("%d",c);
}
int sum(int a,int b)
{
 int z;
	z=a+b;
	printf("%d",z);
}
