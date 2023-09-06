#include<stdio.h>
int main()
{
	int i,big=0,small=0,n;
	int arr[10];
	printf("enter numbers\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
			if(i==0)
			{
				big=arr[i];
				small=arr[i];
			}
			else
			{
				if(arr[i]>=big)
				{
					big=arr[i];
				}

				if(arr[i]<=small)
				{
					small=arr[i];
				}
			}
	}
	printf("%d is bigger\n",big);
	printf("%d is smaller\n",small);
}

