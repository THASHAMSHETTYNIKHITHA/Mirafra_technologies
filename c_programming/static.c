#include<stdio.h>
int main()
{
printf("%d",fun());
return 0;
}
int fun()
{
static int count=0;
count++;
return count;
}
