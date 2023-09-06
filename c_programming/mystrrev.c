#include<stdio.h>
#include<string.h>
void mystrrev(char str[]);
int main()
{
	int x;
	char str[100];
	printf("enter any string\n");
	scanf("%s",str);
	mystrrev(str);
	printf("%s\n",str);
}
void mystrrev(char str[])
{
	int n;
	int temp;
	int i,j,l;
	for(l=0;str[l]!=0;l++);
	//return i;
	for(j=l-1,i=0;i<l/2&&j>=0;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
}

