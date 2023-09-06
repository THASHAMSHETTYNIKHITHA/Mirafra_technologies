#include<stdio.h>
int main()
{
	int n,p;
	printf("enter any number and position\n");
	scanf("%d%d",&n,&p);
	n=n|(1<<p);
	printf("set=%d\n",n);
	n=n&(~(1<<p));
	printf("clear=%d\n",n);
	n=n^(1<<p);
	printf("toggle=%d\n",n);
}

