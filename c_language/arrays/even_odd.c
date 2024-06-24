//Write a program in C to separate odd and even integers into separate arrays.
#include<stdio.h>
int main()
{
	int arr[6];
	int i;
	printf("enter elements\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("even nums are\n");
	for(i=0;i<6;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d\n",arr[i]);
		}
	}
	printf("odd nums are\n");
	for(i=0;i<6;i++)
	{
		if(arr[i]%2!=0)
		{
			printf("%d\n",arr[i]);
		}
	}

}
