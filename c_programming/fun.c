int add(int ,int);
int sub(int ,int);
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter two nums\n");
	scanf("%d%d",&a,&b);
	printf("addition=%d\n",add(a,b));
}
int add(int a,int b)
{
	int c;
	c=a+b;
	sub(a,b);
	return c;
}
int sub(int a,int b)
{
	int c=0;
	c=a-b;
	printf("substraction=%d\n",c);
}
