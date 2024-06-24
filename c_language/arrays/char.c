#include<stdio.h>
int main()
{
char ch;
printf("enter any char\n");
scanf("%c",&ch);
if(ch>=65 || ch<=90)
{
printf("%c\n",ch+1);
}
}
