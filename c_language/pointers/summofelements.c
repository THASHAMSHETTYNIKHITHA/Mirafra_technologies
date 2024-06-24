#include<stdio.h>
int add(int *arr);
int main()
{
int arr[n],i;
int *p=arr;
printf("enter size\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",(p+i));
}
add(&n);
}

int add(int *n)
{
int sum=0,i=0;
while (n!=0)
{
sum=sum+*(n+i);
}
printf("%d\n",sum);
}
