#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,count=0;
	char ch=str[0];
	printf("enter any string\n");
	scanf("%s",str);
	for(i=0;str[i]!=0;i++)
	{
		if(ch==str[i])
		{
			count++;
		}
		printf("%c repeated=%d times\n",ch,count);
	}
	//printf("%c repeated %d times\n",ch,count);
}

