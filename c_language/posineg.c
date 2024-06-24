//6) write a program to read n numbers from user. And print a count of how many of them were negative numbers, and how many of them were positive. 0 is not counted.
#include<stdio.h>
int main()
{
	int i,n,a,pos=0,neg=0;
	printf("enter size\n");
	scanf("%d",&n);
	printf("enter numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a==0)
		{
			continue;
		}
		else if (a>0)
		{
			pos++;
		}
		else
		{
			neg++;
		}
	}
		printf("positive numbers are=%d\n",pos);
		printf("negative numbers are=%d\n",neg);
}
