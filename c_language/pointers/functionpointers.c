#include<stdio.h>
int main()
{
	int(*op)(int ,int);
	int result=op(10,5);
	printf("result=%d\n",result);
	return 0;
}
int add(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int(*op)(int ,int)
{
char op;
	if(op=='+')
	{
		return add;
	}
	else if(op=='-')
	{
		return sub;
	}
	else
	{
		return NULL;
	}
}
