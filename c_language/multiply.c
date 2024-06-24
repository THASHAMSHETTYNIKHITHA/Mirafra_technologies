//Read a number from user, and print its multiplication table upto 10 multiples.
#include<stdio.h>
int main()
{
	int n,m=0,i=1;
	printf("enter num\n");
	scanf("%d",&n);
	while(i<=10)
	{
	printf("%d*%d=%d\n",n,i,n*i);
	i++;
	}
}
