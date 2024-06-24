/*Declare an array of size 10. Enter 10 elements and save them in the array. Print the array . Find out the biggest and smallest numbers and their indexes and print.

  Try to convert the size to a variable and do it for n elements of the array using variable sized 
  arrays.*/

#include<stdio.h>
int main()
{
	int arr[10],big,small;
	printf("enter elements\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]==0)
		{
			big=arr[i];
			small=arr[i];
		}
		if(arr[i]>big)
		{
			big=arr[i];
		}
		else if(arr[i]<small)
		{
			small=arr[i];
		}
	}
	printf("big=%d\n",big);
	printf("small=%d\n",small);
}
