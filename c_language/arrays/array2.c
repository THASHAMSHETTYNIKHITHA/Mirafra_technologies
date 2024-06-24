#include<stdio.h>
int main()
{
	int a[10],i,odd=0,even=0;
	for(i=0;i<10;i++)	
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
	    if (a[i]%2==0)
		{
		 even++;
		}
	     else
	{
		odd++;
	}
}
printf("even num count=%d",even);
printf("odd num count=%d",odd);
}
