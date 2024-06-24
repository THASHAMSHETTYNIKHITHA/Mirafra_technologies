#include<stdio.h>
#include<string.h>
char stringrev(char s[]);
int main()
{
	char s[30];
	printf("enter string\n");
	scanf("%s",s);
	stringrev(s);
}

char stringrev(char v[])
{
	char s[100];
	int i,j,temp,len,k;
	for(len=0;v[len]!=0;len++);
	printf("%d\n",len);
	for(i=0,j=len-1;i<=j;i++,j--)
	{
		temp=v[i];
		v[i]=v[j];
		v[j]=temp;
	}
	printf("%s",v);
}
