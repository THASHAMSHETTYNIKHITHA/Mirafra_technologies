#include<stdio.h>
int main()
{
	int n=10,i,j,sum=0;
	int rem=0;
	for(j=1;n>0;j*=10)
	{
		rem=n%2;
		sum+=rem*j;
		n>>=1;
	}	printf("%d",sum);

}
