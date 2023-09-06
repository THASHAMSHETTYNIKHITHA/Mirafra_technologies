
#include<stdio.h>
int main()
{
	int y;
	char x[2];
	if(y=(&x[1] - &x[0])  < 0 )
{
		printf("down stack");
}
	else
		printf("up stack\n");
//printf("%d",y);
}


