#include<stdio.h>
#include<string.h>
int main()
{
char s[100]="abcd";
int i;
for(i=0;s[i]!=0;i++)
{
s[i]=s[i]+1;
}
printf("%s",s);
}
