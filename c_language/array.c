#include<stdio.h>
int main()
{
//int a[5]={1,0,0,0,3,0,0,0}
int a1[7]={[0]=1,[4]=3,0,0};
for(int i=0;i<7;i++){
printf("%d",a1[i]);
}
}
