#include<stdio.h>
int main()
{
	int n,p;
	printf("enter the number and the position\n");
	scanf("%d%d",&n,&p);
	if((n&(1<<p))!=0)
	{
		printf("set\n");
	}
	else
	{
		printf("reset\n");
	}
}
