#include<stdio.h>
int main()
{
	int n,a,big=0;
	printf("enter size\n");
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		scanf("%d",&n);
		if(n>big)
		{
			big=n;
		}
	}
 printf("%d",big);
}
