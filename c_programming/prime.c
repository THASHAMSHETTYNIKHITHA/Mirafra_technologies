#include<stdio.h>
int isprime(int);
int main()
{
	int a,b,i=1;
	printf("enter any value\n");
		scanf("%d",&a);
	b=isprime(i);
	if(b==0){
	printf("%d is prime\n",b);
	}
	else
	{
	printf("%d is not prime\n",b);
	}

}
int isprime(int n)
{
	int i;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
			break;
	}
	if(i==(n/2)+1)
		return n;
	return 0;
}
