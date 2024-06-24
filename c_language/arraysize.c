# include <stdio.h>

void print(int arr[])
{
   int n = sizeof(arr)/sizeof(arr[0]);
   int i;
//	printf("n=%d\n",n);
//	printf("size=%ld\n",sizeof(arr));
//	printf("sizeof arr[0] is %ld\n",sizeof(arr[0]));
   for (i = 0; i < n; i++)
      printf("%d ", arr[i]);
}

int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
   print(arr);
   return 0;
}
