#include<stdio.h>
int add(int a,int b)
{
return a+b;
}
int sub(int a,int b)
{
return a-b;
}
int div(int a,int b)
{
return a/b;
}
int main()
{
int a=2,b=4,i;
int (*p[3])(int ,int)={add,sub,&div};
//int a=2,b=3;
//int v=(p[0])(a,b);
//printf("%d\n",(p[0])(a,b));
//printf("%d\n",(p[1])(a,b));
for(i=0;i<3;i++)
{
printf("%d\n",(p[i])(a,b));
}
}
