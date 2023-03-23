#include<stdio.h>
void automatic(void);
int main()
{
automatic();
}
void automatic(void)
{
int x=10,y=5;
printf("x=%d,y=%d\n",x,y);
//x++;
//y++;
//printf("x=%d,y=%d\n"x,y);
++x;
++y;
printf("x=%d,y=%d\n",x,y);
}

