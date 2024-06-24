/*"Write a program that reads an integer and displays the right-most digit of the number(Eg: User enters, 456, the output should be 6)."*/
#include<stdio.h>
int main()
{
int n,x;
printf("enter any num\n");
scanf("%d",&n);
n=n%10;
printf("%d\n",n);
}
