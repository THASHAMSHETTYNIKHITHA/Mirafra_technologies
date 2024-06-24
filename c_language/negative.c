/*5)Write a program to read n numbers from key board till the user enters a -ve number. Add all the positive numbers entered and print the sum of the numbers and how many numbers were entered.
 */
#include<stdio.h>
int main()
{
	int i,n,a,s=0;
	printf("enter size\n");
	scanf("%d",&n);
	printf("enter numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if (a<=0)
		{
			break;
		}
		else
			s=s+a;
	}
	printf("sum of the positive untegers=%d",s);
}
