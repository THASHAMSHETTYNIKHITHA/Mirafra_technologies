#include<stdio.h>
#define S 4
int main()
{
	int i,a[]={1,2,3,4};
	printf("before sorting\n");
	for(i=0;i<S;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	printf("after sorting\n");
	for(i=S-1;i>=0;i--){
		printf("%d",a[i]);
	}
}
