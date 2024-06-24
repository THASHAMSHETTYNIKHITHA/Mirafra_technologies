#include<stdio.h>
int main()
{
	int arr[5]={8,8,4,5,8};
	int i,l,s;
	if (arr[0]>arr[1])
	{
		l=arr[0];
		s=arr[1];
	}
	else
	{
		l=arr[1];
		s=arr[0];
	}
	for(i=2;i<5;i++)
	{
		if(l<arr[i])
		{
			s=l;
			l=arr[i];
		}
		else if(s<arr[i])
		{
			s=arr[i];
		}

	}
	printf("largest=%d\nsecond largest=%d\n",l,s);
}
