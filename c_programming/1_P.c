#include<stdio.h>
const static int a=20;
const static int b;
int static x=10;
int static y;
char *c="abc";
int main()
{
static int i=30;
const static int  j;
int *p=&i;
int x=100;
int b;
printf("%p\n",main);
}
