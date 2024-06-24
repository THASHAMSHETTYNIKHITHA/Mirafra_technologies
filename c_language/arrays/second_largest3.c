#include<stdio.h>
int main()
{

    int n;
    printf("enter number of elements in an array:");
    scanf("%d",&n);
    int arr[n];
    int i,j;
    printf("enter elements in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int first=0,second=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>first)
        {
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]!=first)
        {
            second=arr[i];
        }
    }
        printf("second largest element:%d\n",second);
}
