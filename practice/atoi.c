//atoi
#include<stdio.h>
int atoi(char str[]);
int main()
{
	char str[20];
	int b;
	printf("enter the string\n");
	scanf("%s",str);
	b=atoi(str);
	printf("%d",b);
}
int atoi(char str[])
{
	int i,sum=0;
	for(i=0;str[i]!=0;i++)
	{
		sum=sum*10;
		sum=sum+str[i]-48;
	}
	return sum;
}
