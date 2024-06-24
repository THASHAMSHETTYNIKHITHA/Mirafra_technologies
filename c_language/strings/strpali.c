#include<stdio.h>
#include<string.h>
int main()
{
	char s[10],temp=0;
	int l,i,j,k;
	printf("enter\n");
	scanf("%s",s);
	for(l=0;s[l]!=0;l++);
	printf("%d\n",l);
	for(i=0,j=l-1;i<=j;i++,j--)
	{
		if(s[i]!=s[j])
		{
			k=1;
			//printf("hi\n");
		}

	}
	if(k==1)
	{
		printf("not pali=%s",s);

	}
	else
	{
		printf("%s is pali\n",s);
	}
}
