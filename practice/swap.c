//swap two numbers
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the a,b values\n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping the value of a=%d and b=%d\n",a,b);
	//printf("the value of b is %d\n",b);
}
