#include<stdio.h>
int main()
{
int x=10;
int y;//=5;
int const *p=&x;
printf("%d",*p);
*p=5;//can't change value
printf("%d\n",x);
}

