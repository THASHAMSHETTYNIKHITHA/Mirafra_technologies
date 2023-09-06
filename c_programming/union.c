#include<stdio.h>
union abc
{
	int a;
	double b;
	char c;
	long double d;
}b;
int main()
{
	printf("%ld",sizeof(b));
}
