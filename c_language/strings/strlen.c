#include<stdio.h>
#include<string.h>
int main()
{
int count=0,i;
char str[20];
scanf("%s",str);
while(str[i]!=0)
{
count++;
i++;
}
printf("%d",count);
}
