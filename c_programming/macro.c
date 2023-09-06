#include<stdio.h>
#define BIGGEST(a,b,c)(a>b?(a>c?a:c):(b>c?b:c))
int main()
{
int a,b,c;
int l;
scanf("%d%d%d",&a,&b,&c);
l=BIGGEST(a,b,c);
printf("%d is greater\n",l);
}
