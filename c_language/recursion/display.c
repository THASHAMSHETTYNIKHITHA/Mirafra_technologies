#include<stdio.h>
void display(int n);
int main()
{
	int n=3;
	display(n);
}
void display(int n)
{
	if(n<1)
	{
		return;
	}
	else
	{
		printf("before:%d\n",n);
		display(n-1);
		printf("after:%d",n);
	}
}
