#include<stdio.h>
int main()
{
	int x;
	printf("enter any number\n");
	scanf("%d",&x);
	if((x&(x-1))==0)
	{
		printf("%d is power of 2\n",x);
	}
	else
	{
	printf("not a power of 2\n");
	}
}

/*int main()
{
	int x,i,c;
	printf("enter any number\n");
	scanf("%d",&x);
	for(i=31;i>=0;i--)
	{
		int r;
		r=x<<i;
		if(r&i)
		{
			c++;
		}
		if(c==2)
		{
			printf("not a power of 2\n");
		}
	}
	if(c==1)
	{
		printf("power of 2\n");
	}
}*/
