//stringcompare

#include<stdio.h>
#include<stdlib.h>
int mystrcompare(char str1[],char str2[]);
int main()
{
char str1[100];
char str2[100];
int n;
//	printf("enter size\n");
//	scanf("%d",&n);
	printf("enter the first string\n");
	scanf("%s",str1);
	printf("enter the second string\n");
	scanf("%s",str2);
	printf("%d\n",mystrcompare(str1,str2));
}
int mystrcompare(char str1[],char str2[])
{
	int i;
	for(i=0;str1[i]&&str2[i]!=0;i++)
	{
		if(str1[i]<str2[i])
			return -1;
		if(str1[i]>str2[i])
			return 1;
	}
	if(str1[i]==0&&str2[i]==0)
		return 0;
	if(str1[i]==0&&str2[i]!=0)
		return -1;
	if(str1[i]!=0&&str2[i]==0)
		return 1;
}

