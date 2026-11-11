#include <stdio.h>
// Without using temporary variable, and directly manipulating in main array.
// using count = 0; as the 'setter' for where the element should be copied.

//Traversing the array twice to get the result.
/*
first traversal is to place the non-zero elements to the start
second traversal is to fill the remaining elements as 0 from where the count is stopped.  
*/
int main()
{
    int arr[8] = {1,2,0,4,3,0,5,0};
    int count=0;
    for (int i = 0; i < 8; i++)
    {
        if (arr[i]!=0)
        {
            arr[count] = arr[i];
            count++;
        }
    }
    while (count<8)
    {
        arr[count] = 0;
        count++;
    }
    
   for (int i = 0; i < 8; i++)
   {
      printf("%d ",arr[i]);
   }
    printf("\n");
    return 0;
}