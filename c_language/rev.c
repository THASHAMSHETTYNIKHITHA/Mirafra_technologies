#include<stdio.h>
int main()
{
int n,s=0,rev=0,rem=0;
printf("enter num\n");
scanf("%d",&n);
while (n!=0)
{
rem=n%10;
rev=(s*10)+rem;
printf("%d",rev);
n=n/10;
}
}
