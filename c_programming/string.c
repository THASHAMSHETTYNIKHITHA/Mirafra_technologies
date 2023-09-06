#include<stdio.h>
int main()
{
	int i,j;
	int count=0;
	char str[100];
	printf("enter any string\n");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!=0;i++)
	{
	if(str[i]==' ')
	count++;
	}
	printf("%d",count);
}
