#include<stdio.h>
int main()
{
	int i,sum=0,n;
	int arr[n];//={0,0,0,0,0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&n);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{	
		if(arr[n]%10)
			sum=(sum*10)+1;
		n=(arr[n]/10);
		printf("%d\n",sum);
	}
}
//	printf("%d\n",sum);
