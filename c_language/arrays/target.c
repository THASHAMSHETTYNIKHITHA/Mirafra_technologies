#include<stdio.h>
int main()
{
	int i=0,j=0,t;
	int a[5]={8,2,4,6,3};
	printf("enter target\n");
	scanf("%d",&t);
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if (a[i]+a[j]==t)
			{
				printf("the (%d,%d) are equal to target\n",a[i],a[j]);

			}	
		/*	else
  			{
			printf("(%d %d)not found any target\n",a[i],a[j]);
			}
		*/
		}
		//  printf("(%d %d)not found any target\n",a[i],a[j]);

	}
		  printf("not found any target\n");

}
