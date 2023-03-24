#include<stdio.h>
void sum()
{
	extern int a,b,c;
	c=a+b;
	printf("%d\n",c);
}
