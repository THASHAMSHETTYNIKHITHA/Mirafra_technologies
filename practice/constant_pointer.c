//const to pointer

#include<stdio.h>
int main()
{
int x=1;
int *const ptr=&x;
//ptr=&x;
//ptr=&y;
*ptr=10;
printf("%d\n",x);
}
