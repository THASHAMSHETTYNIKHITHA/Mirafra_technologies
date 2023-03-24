#include<stdio.h>
int IsPrime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			break;
		}
	}
	if(i==(n/2)+1){
		return 1;
	}
	else
		return 0;
}
int main()
{
	int i,n,x;
	printf("enter any value\n");
	scanf("%d",&n);

	x=IsPrime(n);
	if(x){
		printf("%d is prime:\n",n);
	}
	else
		printf("%d is not prime:\n",n);
}

