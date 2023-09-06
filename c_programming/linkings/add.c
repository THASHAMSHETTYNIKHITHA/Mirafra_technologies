//static linking

#include<stdio.h>
int add(int a,int b);
int main()
{
	int a,b;
	printf("enter any two values\n");
	scanf("%d%d",&a,&b);
	printf("%d\n",add(a,b));
}
int add(int x,int y)
{
	int z;
	z=x+y;
	return z;
}

