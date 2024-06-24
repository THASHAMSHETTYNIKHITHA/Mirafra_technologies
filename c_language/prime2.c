//prime numbers upto the given numbers
#include<stdio.h>
int main()
{
	int i,j,num,count=0;
	printf("enter\n");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		count=0;
	for(j=1;j<=i;j++)
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
