#include<stdio.h>
int main()
{
char c1,c2;
char *p1=&c1,*p2=&c2;
scanf("%c %c",&c1,&c2);
//getchar();
if(*p1>*p2)
{
printf("%c %d is greater",c1,*p1);
}
else
printf("%c %d is greater",c2,*p2);
}
