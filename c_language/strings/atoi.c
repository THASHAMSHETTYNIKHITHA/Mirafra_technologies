#include<stdio.h>
#include<stdlib.h>
int main()
{
char str[10]="123";
int res=0,i;
for(i=0;str[i]!=0;i++)
{
res=(res*10)+str[i]-'0';
}
printf("%d\n",res);
}
