#include<stdio.h>
int main()
{
	int n,i;
	int arr[]={19,99,19,19,99,41};
	n=sizeof(arr)/sizeof(arr[0]);
	int max=arr[0];
	int second=arr[1];
	for(i=1;i<n;i++)
	{
		if(max<arr[i])
		{
			second=max;
			max=arr[i];
		}
		else if((second<arr[i]) && arr[i]!=max)
		{
			second=arr[i];
		}
	}
		printf("%d\n",second);
}
