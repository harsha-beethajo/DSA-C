#include <stdio.h>
void swap(int *a,int *b)
{
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}
int *BubbleSort(int *arr,int n)
{
  for (int i = 0; i < n-1; i++)
  {
    for (int j = 0; j < n-1-i; j++)
    {
        if(arr[j] > arr[j+1])
        {
            swap(&arr[j],&arr[j+1]);
        }
    }
  }
  return arr;
}
int main()
{
    int arr[]= {4,9,2,5,3,8,7,7,1};
    int n = sizeof(arr)/sizeof(int);
    int *ptr = BubbleSort(arr,n);
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");
return 0;
}