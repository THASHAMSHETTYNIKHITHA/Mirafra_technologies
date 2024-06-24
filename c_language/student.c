//for n students from a class, read 6 subject marks for every student, and calculate their percentage of marks, and print how many students got first class (>60%) , how many students got second class (>50%) and how many students are just passed (>40%) and how many failed.
#include<stdio.h>
int main()
{
	int i,j,k,n=3,a,s=0;
	float p;
	printf("enter how many students\n");
	scanf("%d",&k);
	for(j=1;j<=k;j++)
	{
		//scanf("%d",&x);
		printf("enter %d student marks of 6 subjects\n",j);
		for(i=1;i<=6;i++)
		{
			scanf("%d",&a);
			s=s+a;
		}
			p=((s/100)*6);	
		printf("scored marks=%d\n",s);
		printf("percentage=%f\n",p);
	}	
}
