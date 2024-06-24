#include<stdio.h>
int main()
{
int x=0x20,p=3;
printf("%x",(x&(~(1<<p))));
}
