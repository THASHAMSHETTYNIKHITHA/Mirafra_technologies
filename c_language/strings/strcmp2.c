#include<stdio.h>
#include<string.h>
int stringcmp(char s1[],char s2[]);
int main()
{
	char s1[30];
	char s2[30];
	int x;
	printf("enter two strings\n");
	scanf("%s %s",s1,s2);
	x=stringcmp(s1,s2);
	if(x==0)
	printf("%d means both same\n",x);
	if(x==1)
	printf("%d says string 1 is having high ascii value",x);
	if(x==-1)
	printf("%d says string2 is having high ascii value",x);
}


int stringcmp(char s1[],char s2[])
{
	int i;
	for(i=0;s1[i]!='\0' || s2[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
		{	
			if (s1[i]>s2[i])
			{
				return 1;
			}
			else if(s1[i]<s2[i])
			{
				return -1;
			}
		}
	}
}	
