#include<stdio.h>
int main()
{
	int a=123321,k,s=0,x;
	k=a;
	while (a!=0)
	{
		x=a%10;
		a=a/10;
		s=(s*10)+x;
	}
	if (k==s)
	{
	printf("it is a palindrome: %d\n",s);

	}
	else
	{
	printf("not a palindrome: %d\n",s);
	}
}
