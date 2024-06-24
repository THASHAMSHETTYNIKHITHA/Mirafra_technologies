//even or odd
#include<stdio.h>
int main()
{
	int n,a;
	printf("enter size\n");
	scanf("%d",&a);
	printf("enter values");
	while (a!=0)
	{
		scanf("%d",&n);
		if (n%2==0)
		{
			printf("%d is even\n",n);
		}
		else
		{
			printf("%d is odd\n",n);
		}
		a=a-1;
	}
}

