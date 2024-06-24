int add(int a,int b);

#include<stdio.h>
int c;
int main()
{
	int a,b,x=0;
	printf("enter elements\n");
	scanf("%d%d",&a,&b);
	x=add(a,b);
	printf("%d",x);
}
int add(int a,int b)
{
	c=a+b;
	return c;
}
