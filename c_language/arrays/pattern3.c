#include<stdio.h>
int main()
{
    int n=5,i;
    for(i=0;i<n;i++)
    {
        for(int space=n;space<=i;space--)
        {
            printf(" ");
        }
        for(int star=0;star<n-i;star++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
