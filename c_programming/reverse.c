#include<stdio.h>
int main()
{
	int i,j;
	int n=0x32;
	for(i=0,j=31;i<j;i++,j--)
	{
		if(!(n&(1<<i))!=!(n&(1<<j)))
		{
			printf("%x",n);
		}
	}
}
