//bubblesort

#include<stdio.h>
int main()
{
	int arr[100];
	int n,i,j,temp;
	printf("Enter number of elements\n");
	scanf("%d",&n);
	printf("enter values\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("after sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
	return 0;
}
