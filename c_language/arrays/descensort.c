//Write a program in C to sort elements of an array in descending order.
#include<stdio.h>
int main()
{
	int arr[5];//={4,5,2,7,8};
	int i,j,temp=0;
	printf("enter elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;

			}
		}

	}
	printf("sorted array is \n");
	for(i=0;i<5;i++)
	{
	printf("%d\n",arr[i]);
	}
}
