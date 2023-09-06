#include<stdio.h>
int main()
{
	int x,p;
	printf("enter the value and position\n");
	scanf("%d%d",&x,&p);
	x=x|(1<<p);
	printf("set=%d\n",x);
	x=x&(~(1<<p));
	printf("clear=%d\n",x);
	x=x^(1<<p);
	printf("toggle=%d\n",x);
}
