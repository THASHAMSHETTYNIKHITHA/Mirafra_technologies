#include<stdio.h>
int add(int a,int b)
{
return a+b;
}
int sub(int a,int b)
{
return a-b;
}
int main()
{
//int a=10,b=20;
int (*p)(int ,int);
p=add;
int y=(*p)(10,20);
printf("%d\n",y);
p=&sub;
printf("%d\n",(*p)(10,20));
}


