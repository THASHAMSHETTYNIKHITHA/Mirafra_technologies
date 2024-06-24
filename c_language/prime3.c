//prime in between
#include<stdio.h>
int main()
{
	int i,j,a,b,count=0;
	printf("enter\n");
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		count=0;
	for(j=1;j<=b;j++)
	{
		if (i%j==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("%d is prime\n",i);
	}
	else
	{
		printf("%d is not prime\n",i);
	}
}
}
