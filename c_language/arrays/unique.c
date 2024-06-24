//Write a program in C to print all unique elements in an array.
#include<stdio.h>
int main()
{
	int arr[5]={1,1,2,2,4};
	int arr1[5];
	int i,j,k=0,c=0;
	for(i=0;i<5;i++)
	{
		 c=0;
		for(j=0;j<5;j++)
		{
			if (i!=j)
			{
				if(arr[i]==arr[j])
				{
					c++;
				}
				
			}
	
		}
	if(c==0)
	{
	printf("%d\n",arr[i]);
	}
	}
}
