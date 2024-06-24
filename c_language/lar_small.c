#include<stdio.h>
int main()
{
	int n,a,big,s,count=0,small=0;
	printf("enter size");
	scanf("%d",&n);
	printf("enter numbers\n");
	for(int i=0;i<n;i++)
	{
		//int small=0;
		scanf("%d",&a);
		if (i==0)
		{
			big=a;
			s=a;
		}
		if (a>big)
		{
			big=a;
	//		count++;
		}
		else if(a<s)
		{
			s=a;
	//		small++;
		}
	}
	printf("big num=%d\n",big);
	printf("small num=%d\n",s);
}


