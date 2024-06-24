//vowel or not
#include<stdio.h>
int main()
{
	char ch;
	printf("enter character\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A':
			printf("%c is vowel\n",ch);
			break;
		case 'E':
			printf("%c is vowel\n",ch);
			break;
		case 'I':
			printf("%c is vowel\n",ch);
			break;
		case 'O':
			printf("%c is vowel\n",ch);
			break;
		case 'U':
			printf("%c is vowel\n",ch);
			break;
		default:printf("%c is consonent\n",ch);
	}

}	
