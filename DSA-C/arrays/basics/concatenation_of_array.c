#include <stdio.h>
#include <stdlib.h>
int* getConcatenation(int* nums, int numsSize, int* returnSize) 
{
    int *arr;
    arr = (int*)malloc(numsSize*2*sizeof(int));
    if (arr == NULL)
    {
        *returnSize = 0;
        return 0;
    }
    for (int i = 0; i < numsSize; i++)
    {
        arr[i] = nums[i];
        arr[i+numsSize] = nums[i];
    }
    *returnSize = 2*numsSize;
    return arr;
}
int main()
{
   int nums[] = {1,2,1};
   int numsSize = sizeof(nums)/sizeof(int);
   int returnSize = 0;
   int *concat = getConcatenation(nums,numsSize,&returnSize);
   for (int i = 0; i < numsSize; i++)
   {
     printf("%d ",nums[i]);
   }
    printf("\n");
   for (int i = 0; i < returnSize; i++)
   {
     printf("%d ",concat[i]);
   }
    printf("\n");
    free(concat);
   return 0;

}