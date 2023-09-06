#include<stdio.h>
int main()
{
	int i,j,n;
	int arr[50];
	int b[50];
	printf("enter size\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=n-1,j=0;i>=0;i--,j++)
	{
		b[j]=arr[i];
	}
	printf("reversed num are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}
}
