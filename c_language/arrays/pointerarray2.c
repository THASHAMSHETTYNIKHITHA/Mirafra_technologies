/*#include<stdio.h>
int main()
{
int arr[5]={1,2,3,4,5};
int i;
for(i=0;i<5;i++)
{
printf("%d\n",arr[i]);
}
}*/

/*#include<stdio.h>
int main()
{
int arr[5]={1,2,3,4,5};
int i,*p=arr;
for(i=0;i<5;i++)
{
printf("%d\n",*(p+i));
}
for(i=0;i<5;i++)
{
printf("%d\n",*(arr+i));
}
}*/


#include<stdio.h>
int main()
{
int a=10;
int *p=&a;
printf("%d\n",a);
printf("%d\n",*p);
//printf("%x\n",p);
printf("%p\n",p);
printf("%p",&a);
}

















