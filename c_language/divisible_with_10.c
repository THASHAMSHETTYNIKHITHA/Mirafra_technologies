// Write a program to count and print how many numbers are divisible with 10, between 2 given numbers.
#include<stdio.h>
int main()
{
int i,a,b,count=0;
printf("enter a and b values\n");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
if (i%2==0)
{
count++;
}
}
printf("%d\n",count);
printf("%d\n",i);
}
