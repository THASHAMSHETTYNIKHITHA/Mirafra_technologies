#include<stdio.h>
int main()
{
int i,n=0x12,ctr=0;
for(i=0;i<sizeof(n)*8;i++)
{
if (n&1==1)
{
ctr++;
}
n=n>>1;
}
printf("%d",ctr);
}
