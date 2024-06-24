//1) Write a program to print if a given number is prime or not based on number of factors counting.
#include<stdio.h>
int main()
{
	int i=1,num,count=0;
	printf("enter\n");
	scanf("%d",&num);
	while(i<=num)
	{
		if (num%i==0)
		{
			count++;
		}
	i++;
	}
	if(count==2)
	{
		printf("is prime\n");
	}
	else
	{
		printf("not prime\n");
	}
}
