// Write a program in C to merge two arrays of the same size sorted in descending order.
/*Input the number of elements to be stored in the first array :3
  Input 3 elements in the array :
  element - 0 : 1
  element - 1 : 2
  element - 2 : 3
  Input the number of elements to be stored in the second array :3
  Input 3 elements in the array :
  element - 0 : 1
  element - 1 : 2
  element - 2 : 3
  Expected Output :
  The merged array in decending order is :
  3 3 2 2 1 1*/ 
#include <stdio.h>
int main() 
{
	int n1,n2,n3,i,j,k;
	printf("enter size of 1st and second arrays\n");
	scanf("%d%d",&n1,&n2);
	int arr1[100],arr2[100],arr3[100],temp=0;
	printf("enter 1st array elements\n");
	for(i=0;i<n1;i++)
	{
		printf("element - %d : ",i);
		scanf("%d",&arr1[i]);
	}
	printf("enter second array elements\n");
	for(i=0;i<n2;i++)
	{
		printf("element - %d : ",i);
		scanf("%d",&arr2[i]);
	}
	n3=n1+n2;
	printf("the size is %d\n",n3);
	for(i=0;i<n1;i++)
	{
		arr3[i]=arr1[i];
	//	printf("%d\n",arr3[i]);
	}
	for(j=0;j<n2;j++)
	{
		arr3[i]=arr2[j];
		i++;
//		printf("%d\n",arr3[i]);
	}
	for(i=0;i<n3-1;i++)
	{
		for(k=0;k<n3;k++)
		{
			if(arr3[k]<=arr3[k+1])
			{
				j=arr3[k];
				arr3[k]=arr3[k+1];
				arr3[k+1]=j;
			}
		}
	}
	printf("the merged array in decending order is \n");
	for(i=0;i<n3;i++)
	{
		printf("%d\n",arr3[i]);
	}
	//printf("%d\n",arr3[i]);
}
