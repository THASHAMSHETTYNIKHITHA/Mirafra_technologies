//Write a program in C to find the sum of all elements of the array

#include<stdio.h>
int main()
{
int arr[5],i,sum=0;
printf("enter elements\n");
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
sum=sum+arr[i];
}
printf("sum=%d\n",sum);
}
