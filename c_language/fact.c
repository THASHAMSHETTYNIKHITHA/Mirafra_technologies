#include<stdio.h>
int main()
{
int n=5;
int fact=1,i=1;
while(i<=n)
{
fact=fact*i;
i++;
}
printf("%d",fact);
}
