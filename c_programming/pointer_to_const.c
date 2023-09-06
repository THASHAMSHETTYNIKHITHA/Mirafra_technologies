#include<stdio.h>
int main()
{
int x=10;
int y=10;
 const int *ptr;
ptr=&x;
ptr=&y;
//*ptr=20;
printf("%d\n",x);
printf("%d\n",y);
}

