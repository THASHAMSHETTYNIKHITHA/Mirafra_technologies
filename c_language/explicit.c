#include<stdio.h>
int main()
{
	int sum=17,count=5;
	double mean;
	mean=sum/count;
	printf("%lf\n",mean);
	mean=(double)sum/count;
	printf("%lf\n",mean);
}
