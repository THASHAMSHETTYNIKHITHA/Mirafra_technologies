/*"Write a program that reads a floating-point number and then displays the right-most digit of the integral part of the number.(Eg: User enters, 456.789, the output should be 6, which is last digit of the integral part of the number).*/
#include<stdio.h>
int main()
{
float f;
printf("enter float value\n");
scanf("%f",f);
f=f%10;
printf("%f",f);
}
