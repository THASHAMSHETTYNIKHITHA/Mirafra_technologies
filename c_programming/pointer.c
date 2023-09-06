#include<stdio.h>
int main()
{
int *p;
int a=10;
p=&a;
printf("address=%p\n",p);
printf("value=%d\n",a);
a=20;
p=&a;
printf("value=%d\n",*p);
printf("address=%p\n",p);
}
