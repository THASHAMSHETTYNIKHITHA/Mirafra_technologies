//stringcancatination

#include<stdio.h>
int mystrcat(char d[],char s[]);
int main()
{
	char s[20];//="nikki";
	char d[20];//="akki";
	printf("enter source and destination strings\n");
	scanf("%s%s",s,d);
	mystrcat(d,s);
	printf("%s\n",d);
}
int mystrcat(char d[],char s[])
{
	int i,j;
	for(j=0;d[j]!=0;j++);
		for(i=0;s[i]!=0;i++,j++)
	{
		d[j]=s[i];
	}
	d[j]=s[i];
	printf("after cancatination\n");
}

