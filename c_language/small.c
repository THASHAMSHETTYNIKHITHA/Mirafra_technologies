#include<stdio.h>
int main()
{
	int n,i,small=0,a;
	printf("enter numbers");
	for(i=0;i<5;i++)
	{
		scanf("%d",&n);
		if(i==0)
		{
			a=n;
		}
		else if(n<a)
		{
			a=n;
		}
	}
	printf("smallest num=%d",a);

}

