#include<stdio.h>
int main()
{
	char ch;
	printf("enter any character\n");
	scanf("%c",&ch);
	if (ch>=65 && ch<=92)
	{
		printf("%c is big",ch);
	}
	else if (ch>=97 && ch<=122)
	{
		printf("%c is small",ch);
	}
	else if (ch>=48 && ch<=57)
	{
		printf("%c is numeric",ch);
	}
	else if(ch>=33 && ch<=47)
	{
		printf("%c is special character\n",ch);
	}
	else if(ch>=58 && ch<=64)
	{
		printf("%c is special characters\n",ch);
	}
}
