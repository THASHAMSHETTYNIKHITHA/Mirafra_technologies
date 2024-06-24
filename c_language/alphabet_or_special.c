//Write a program to check if a given character is alphabet or number or special character
#include<stdio.h>
int main()
{
char ch;
printf("enter any character\n");
scanf("%c",&ch);
if (ch>=65 && ch<=91 || ch>=97 && ch<=122)
{
printf("%c it is a  character\n",ch);
}
/*if(ch>97 && ch<=122)
{
printf("%c is a small character\n",ch);
}*/
if (ch>33 && ch<=64)
{
printf("%c is a special character\n",ch);
}
}
