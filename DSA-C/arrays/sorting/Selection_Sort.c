#include <stdio.h>
int *selectionSort(int *arr,int arraySize)
{
   int temp,j;
   for (int i = 0; i < arraySize; i++)
   {
      int min = i;
      for (j = i+1; j < arraySize; j++)
      {
         if (arr[min] > arr[j])
         {
            min = j;
         }
      }
      temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
   }
   return arr;
}
int main()
{
   int arr[] = {64,25,12,22,11};
   int size = sizeof(arr)/sizeof(arr[0]);
   int *sort = selectionSort(arr,size);

   for (int i = 0; i < size; i++)
   {
     printf("%d ",sort[i]);
   }
   printf("\n");
   return 0;
}