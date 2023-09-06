#include<stdio.h>
int main()
{
	int x;
	printf("enter the value of x\n");
	scanf("%x",&x);
	if(x&1==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}
