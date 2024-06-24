#include<stdio.h>
int main()
{
int a=10,b=8;
int *p,*q;
p=&a;
p=&b;
printf("value of a=%d\n",a);
printf("value of a=%d\n",*p);
printf("address of a=%x\n",&a);
printf("address of a=%x\n",p);
printf("value of b=%d\n",b);
printf("value of b=%d\n",*q);
printf("address of b=%d\n",&b);
printf("address of b=%d\n",q);
}
