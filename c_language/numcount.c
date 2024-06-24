#include<stdio.h>
int main()
{
int x;
int arr[]={1,2,1,1,2,2,2,2,3,4,4,44,55,55,44,3,4,5,6,7,8,8,8,9,0,9,8,7,7,7,5,5,55,5,5,5,5,5,99};
x=sizeof(arr)/sizeof(arr[5]);
printf("%d",x);
}
