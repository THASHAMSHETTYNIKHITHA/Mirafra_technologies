#include<stdio.h>
int main()
{
int i,n=5,p=0;
for(i=0;i<sizeof(n)*8;i++)
{
if(n&(1<<p))
{
printf("%d",p);
break;
}
p++;
}
}
