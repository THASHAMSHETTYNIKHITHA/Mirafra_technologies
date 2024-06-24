#include<stdio.h>
int isprime();
int main()
{
	int n;
	printf("enter any num\n");
	scanf("%d",&n);
	isprime(n);
}
int isprime(n)
{
	int k,i;
	if (n==0 || n==1)
	{
		k=1;
	}
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		k=1;
		break;
	}
	if(k==1)
	{
		printf("not prime");
	}
	else
	{
		printf("prime");
	}
}
