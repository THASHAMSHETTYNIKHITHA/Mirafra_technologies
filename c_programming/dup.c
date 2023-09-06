#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];//={"nikkitthaa"};
	int i,j,count=0,k;//='k';
	printf("enter any string\n");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!=0;i++)
	{
	count=0;
	for(j=i+1;str[j]!=0;j++)
	{
		if(str[i]==str[j])
		{
			count++;
			printf("character %c repeated %d times\n",str[i],count+1);
	}
}
	}
//	printf("character is repeated %d times",j);
}
