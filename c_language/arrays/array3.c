#include<stdio.h>
int main()
{
	int arr1[5];
	int arr2[5];
	int sumarr[5];
	int i;
	printf("enter 1st array nums\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("enter 2nd array nums\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr2[i]);
	}
	printf("the sum is\n");
	for(i=0;i<5;i++)
	{
		sumarr[i]=arr1[i]+arr2[i];
	printf("index[%d]=sum of 2 arrays=%d\n",i,sumarr[i]);
}
}


