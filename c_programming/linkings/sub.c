//static linking 

#include<stdio.h>
int sub(int a,int b);
int main()
{
	int a,b;
	printf("enter any two values\n");
	scanf("%d%d",&a,&b);
	printf("%d\n",sub(a,b));
}
int sub(int x,int y)
{
	int z;
	z=x-y;
	return z;
}

