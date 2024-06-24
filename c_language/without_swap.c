#include<stdio.h>
int main()
{
int a=2,b=3;
printf("a=%d\nb=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d\nb=%d\n",a,b);
}
