#include<stdio.h>
//const int a=10;
int main()
{
const auto int a=5;
//a=11;
//printf("%d\n",a);
int *p=&a;
*p=20;
//scanff("%d\n",a);
//a=20;
printf("%d\n",a);
}
