#include<stdio.h>
int main()
{
int n,rem=0,count=0;
printf("enter num\n");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
count++;
n=n/10;
}
printf("%ld\n",sizeof(n));
printf("%d\n",count);
}
