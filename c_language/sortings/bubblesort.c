#include<stdio.h>
int main()
{
	int a[5]={6,3,4,1,5};
	int i,j,temp=0;
	for(i=0;i<5-1;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
}
