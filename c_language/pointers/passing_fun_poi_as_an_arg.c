#include<stdio.h>
int add(int a,int b)
{
return a+b;
}
int sub(int a,int b)
{
return a-b;
}
int fun(int (*p)(int ,int))
{
return p(2,4);
}
int main()
{
int add(int x,int y);
int sub(int x,int y);
int (*p)(int ,int)=add;
printf("%d\n",fun(p));
}

