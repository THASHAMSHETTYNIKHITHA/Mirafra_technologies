#include<stdio.h>
int main()
{
	int n=0x35;
	int p,q,x,res;
	p=(n>>2)&0x03;
	q=(n>>6)&0x03;
	x=p^q;
	x=(x<<2)|(x<<6);
	res=x^n;
	printf("%x",res);
}
