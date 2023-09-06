#include<stdio.h>
int main()
{
int x=10;
int *const p=&x;
//*p=&x;
*p=20;
printf("%d",x);
}
