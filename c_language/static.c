#include<stdio.h>
void display();
int main()
{
display();
display();
}
void display()
{
static int i=1;
i=i+5;
printf("%d\n",i);
}
