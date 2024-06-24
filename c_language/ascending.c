/*Read n numbers in ascending order. If a number entered is bigger than previous number, then count it. If it is smaller, then dont count it, instead let the loop repeat itself and read another number.*/
#include<stdio.h>
int main()
{
	int arr[5],j,n,count=0,i,small=0;
	printf("enter nums\n");
	for(i=0;i<5;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<4;i++)
	{
		if (arr[i]<arr[i+1])
		{
			count++;
		}
		else if(arr[i]>arr[i+1])
		{
			small++;
		}
	}

	printf("bigger than previous numbers are=%d\n",count);
	printf("smallar than previous number=%d\n",small);
}
