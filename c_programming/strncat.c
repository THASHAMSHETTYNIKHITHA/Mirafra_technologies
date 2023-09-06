//stringncat

#include<stdio.h>
#include<string.h>
void mystrncat(char d[],char s[],int );
int main()
{
	int n;
	char s[20];//="nikki";
	char d[20];//="akki";
	printf("enter the source and destination strings\n");
	scanf("%s%s",s,d);
	printf("Enter n value:\n");
	scanf("%d",&n);
	mystrncat(d,s,n);
	printf("%s\n",d);
}
void mystrncat(char d[],char s[],int n)
{
	int i,j;
	for(i=0;d[i]!=0;i++);
	for(j=0;s[j]!=0&&j<n;j++,i++){
		d[i]=s[j];

	}
d[i]='\0';
printf("The strncat is : ");
}


