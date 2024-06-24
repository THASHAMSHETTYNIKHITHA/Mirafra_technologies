#include<stdio.h>
int main()
{
int a,b,c,x;
printf("enter a,b,c values\n");
scanf("%d%d%d",&a,&b,&c);
x=(a>b)?((a>c)?a:c):((b>c)?b:c);
printf("%dis greater\n",x);
}
