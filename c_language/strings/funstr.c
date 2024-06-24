#include<stdio.h>
#include<string.h>
char stringlen();
int main()
{
	int x;
	char s1[30];
	printf("enter string\n");
	scanf("%s",s1);
	x=stringlen(s1);
	printf("%d",x);
}


char stringlen(char s1[])
{
	int i;
	for(i=0;s1[i]!=0;i++);
	return i;
}
