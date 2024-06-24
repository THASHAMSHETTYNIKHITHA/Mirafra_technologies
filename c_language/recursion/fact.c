#include<stdio.h>
int factorial(int n);
int main()
{
	int x;
	x=factorial(5);
	printf("%d\n",x);

}
int factorial(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
