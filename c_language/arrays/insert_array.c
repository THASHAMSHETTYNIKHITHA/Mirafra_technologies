//Write a program in C to insert the values in the array (sorted list).

#include<stdio.h>
int main()
{
int arr[5],arr2[100],i,j,n,p;
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
printf("before sorted\n");
for(i=0;i<5;i++)
{
	printf("%d\n",arr[i]);
}
printf("enter element to insert\n");
scanf("%d",&n);
printf("available array is\n");
for(i=0;i<5;i++)
{
	printf("%d\n",arr[i]);
}
for(i=0;i<5;i++)
{
	if(n<arr[i])
	{
		p=i;
		break;
	}
	else
	{
		p=i+1;
	}
printf("%d\n",arr[i]);
}
}
