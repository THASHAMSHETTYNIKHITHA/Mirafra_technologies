#include<stdio.h>
int sum();
int main()
{
int x;
printf("enter numbers\n");
x=sum();
printf("%d",x);
}
int sum()
{
int s=0,n,i;
for(i=0;i<4;i++){
scanf("%d",&n);
s=s+n;
}
return s;
}

