#include<stdio.h>
#include<string.h>
char stringcmp(char s1[],char s2[]);
int main()
{
	char s1[30];
	char s2[30];
	printf("enter two strings\n");
	scanf("%s %s",s1,s2);
	stringcmp(s1,s2);
}


char stringcmp(char s1[],char s2[])
{
	int i,flag;
	for(i=0;s1[i]!='\0' || s1[i]!='\0';i++)
	{
		if (s1[i]!=s2[i])
		{
			flag=1;
			break;
		}
	}
	if (flag==1)
	{
	printf("both are not same\n");
	}
	else
	{
	printf("same");
	}
}
