/*4) Read n numbers from user, and while reading every number, print if the number is bigger or smaller than the previous number. For first number, there wont be any output as it is the first one.
 */
#include<stdio.h>
int main()
{
	int n,big,small;
	printf("enter nums\n");
	for (int i=0;i<=5;i++)
	{
		scanf("%d",&n);
		if (i==0)
		{
			small=n;
			big=n;
		}
		if(n>big)
		{
			big=n;
		}
		else if(n<small)
		{
			small=n;
		}
	}
}
