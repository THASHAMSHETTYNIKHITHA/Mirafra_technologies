#include<stdio.h>
int main()
{
	char ch;
	printf("enter any number\n");
	scanf("%c",&ch);
	if(ch>='0'&&ch<='9')
	{
		printf("it is a numeric\n");
	}
	else
	{
		printf("it is not a numeric\n");
	}
}
