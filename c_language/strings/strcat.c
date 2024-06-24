#include<stdio.h>
#include<string.h>
char stringcat(char d1[],char s1[]);
int main()
{
	char d1[30];
	char s1[6];
	char x;
	printf("enter two strings\n");
	scanf("%s %s",d1,s1);
	stringcat(d1,s1);
	//printf("%s",x);
}

char stringcat(char d1[],char s1[])
{
	int i,l1=0,l2=0;
	for(i=0;d1[i]!=0;i++)
	{
		l1++;
	}
	printf("len of 1st str=%d\n",l1);
	for(i=0;s1[i]!=0;i++)
	{
		l2++;
	}
	printf("len of 2nd str=%d\n",l2);
	for(i=0;i<l2;i++)
	{
		d1[l1+i]=s1[i];
	}
	printf("after cancatination=%s\n",d1);
}
