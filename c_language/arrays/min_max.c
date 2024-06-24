//Write a program in C to find the maximum and minimum elements in an array.
#include<stdio.h>
int main()
{
	int arr[5];
	int max,min,i;
	printf("enter elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	printf("1st max=%d\nsecond max=%d\n",max,min);
	for(i=0;i<5;i++)
	{
		if (arr[i]>max)
			max=arr[i];
		else if(arr[i]<min)
			min=arr[i];

	}
	printf("minimum element=%d\nmaximum element=%d\n",min,max);

}
