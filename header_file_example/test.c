#include <stdio.h>
#include "bubble_sort.h"
int main()
{
   int arr[] = {6,4,9,9,2,3,5,1,7,5,8,10,12,15,14,11};
   int n;
   n = sizeof(arr)/sizeof(int);
   printf("Before sorting: ");
   for (int i = 0; i < n; i++)
   {
      printf("%d ",arr[i]);
   }
   sort(arr,n);
   printf("\nAfter sorting: ");
   for (int i = 0; i < n; i++)
   {
     printf("%d ",arr[i]);
   }
   printf("\n");

    return 0;
}