// Write a program in C to copy the elements of one array into another array.
#include<stdio.h>
int main()
{
	int arr1[5]={1,2,4,5,6};
	int arr2[5];
	int i;
	for(i=0;i<5;i++)
	{
		arr2[i]=arr1[i];
	}
	for(i=0;i<5;i++)
	{
		printf("%5d\n",arr2[i]);
	}
}
