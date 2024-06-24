// Write a program in C to count the total number of duplicate elements in an array.


#include<stdio.h>
int main()
{
	int arr[6]={1,1,7,7,1,4};
	int i,j,count=0;
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if (arr[i]==arr[j])
			{
				printf("repeated=%d\n",arr[i]);
				count++;
				break;
			}
		}
	}
	printf("total duplicate elements found in array are %d\n",count);
}
