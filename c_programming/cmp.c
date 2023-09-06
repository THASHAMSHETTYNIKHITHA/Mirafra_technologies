#include<stdio.h>
int strcmp(char str1[],char str2[]);
int main()
{
	int x;
	char str1[100];
	char str2[100];
	printf("enter two strings\n");
	scanf("%s%s",str1,str2);
	x=strcmp(str1,str2);
	switch(x)
	{
		case 1:printf("str1 is greater\n");
		       break;
		case -1:printf("str2 is greater\n");
			break;
		default:printf("both are equall\n");
	}
}
int strcmp(char str1[],char str2[])
{
	int i;
	for(i=0;str1[i]||str2[i]!=0;i++)
	{
		if(str1[i]>str2[i])
			return 1;
		if(str1[i]<str2[i])
			return -1;
	}
}
