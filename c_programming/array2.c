#include<stdio.h>
int main()
{
	int i;
	int arr[6]={0,1,2,3,4,5};
	for(i=0;i<6;i++)
	{
		if(i==0)
		continue;
		printf("%d",arr[i]);
	}
	//printf("%d",arr[i]);
}
