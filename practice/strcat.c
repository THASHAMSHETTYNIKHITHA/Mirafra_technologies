//stringcancatination

#include<stdio.h>
int mystrcat(char s[],char d[]);
int main()
{
	char s[20];//="nikki";
	char d[20];//="akki";
	printf("enter source and destination strings\n");
	scanf("%s%s",s,d);
	mystrcat(d,s);
	printf("%s\n",d);
}
int mystrcat(char s[],char d[])
{
	int i,j;
	for(i=0;s[i]!=0;i++);
		for(j=0;d[j]!=0;j++,i++)
	{
		s[i]=d[j];
	}
	s[i]=d[j];
	printf("after cancatination\n");
}

