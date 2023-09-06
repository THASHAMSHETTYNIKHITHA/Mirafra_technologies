#include<stdio.h>
int main()
{
int a;
char b;
float c;
double d;
long double e;
short int f;
char *p=0;
printf("size of int=%d\nsize of char=%d\nsize of float=%d\nsize ofdouble=%ld\nsize of long double=%ld\nsize of short=%d\nsize of pointer=%d\n",sizeof(int),sizeof(char),sizeof(float),sizeof(double),sizeof(long double),sizeof(short int),sizeof(*p));
}
