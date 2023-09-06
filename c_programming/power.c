#include<stdio.h>
int main()
{
int n;
printf("enter any value\n");
scanf("%d",&n);
if((n&n-1)==0)
{
printf("power of 2");
}
else
{
printf("not a power of 2\n");
}
}
