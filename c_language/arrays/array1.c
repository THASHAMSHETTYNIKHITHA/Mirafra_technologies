#include<stdio.h>
int main()
{
	int a[4],i;
	for(i=0;i<5;i++)	
	{
		scanf("%d",&a[i]);
	}
	for(i=4;i>=0;i--)
	{
		printf("%5d",a[i]);
	}
}
