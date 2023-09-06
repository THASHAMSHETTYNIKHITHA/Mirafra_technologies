#include<stdio.h>
struct bitfield
{
int a1:3;
char a2:4;
}b;
int main()
{
b.a1=9;
b.a2=8;
printf("%d%d\n",b.a1,b.a2);
}
