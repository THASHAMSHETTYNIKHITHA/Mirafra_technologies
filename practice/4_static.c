#include<stdio.h>
static int a=0,b=0;
static int sum();
int main()
{
	//static int a,b;
	printf("enter the values of a and b\n");
	scanf("%d%d",&a,&b);
	sum();
	//printf("%d",c);
}
int sum()
{
 int z;
	z=a+b;
	printf("%d",z);
}
