#include<stdio.h>
int main()
{
	int i,x,rem;
	printf("enter the num\n");
	scanf("%d",&x);
	for(i=0;i<32;i++)
	{
		rem=x>>i;
		if(rem&1==1)
			printf("1");
		else
			printf("0");
	}
}
