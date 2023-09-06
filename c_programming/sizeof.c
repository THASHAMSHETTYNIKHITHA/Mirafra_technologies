#include<stdio.h>
#define MYSIZEOF(y)  (char*)(&y+1)-(char *)(&y)
int main()
{
char y;
//float a;
//a=mysizeof(x);
printf("%ld",MYSIZEOF(y));
}
