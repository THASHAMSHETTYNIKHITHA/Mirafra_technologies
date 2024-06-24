#include<stdio.h>
#include<string.h>
char stringcopy(char s1[],char d1[]);
int main()
{
	char s1[100]="nikki";
	char d1[100]="nikhitha";
	//scanf("%s %s",s1,d1);
	stringcopy(s1,d1);
}


char stringcopy(char s1[],char d1[])
{
	int i;
	for(i=0;d1[i]!=0;i++)
	{
		s1[i]=d1[i];
	}
	s1[i]='\0';
	printf("%s",d1);
}
