#include<stdio.h>
int main()
{
	int n=100;
	int arr[n];
	int i;
	for(i=n+1;i>1;i--)
	{
		arr[i]=i-1;
		printf("%d\n",arr[i]);
	}
}
