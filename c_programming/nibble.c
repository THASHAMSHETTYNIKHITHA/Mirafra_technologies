#include<stdio.h>
int main()
{
	int a;
	printf("enter a value\n");
	//printf("before swapping=%d",a);
	scanf("%x",&a);
	a=(a&0xF0)>>4|(a&0x0F)<<4;
	printf("after swapping=%x\n",a);
}
