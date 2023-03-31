//bubble sort
#include<stdio.h>
int main()
{
	int i,j,n,temp;
	int arr[100];//={16,3,12,3,19};
	printf("enter the size of an array\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("after sorting\n");
	for(i=0;i<n;i++)
	{
	printf("%d\n",arr[i]);
	}
}
