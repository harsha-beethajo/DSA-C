#include <stdio.h>
#include <stdlib.h>
/*
Input: nums = [0,2,1,5,3,4]
Output: [0,1,2,4,5,3]
==> nums[num[0]],nums[nums[1]],...
*/
int *buildArray(int *nums, int numsSize, int *returnSize)
{
   int *arr;
    arr = (int*)malloc(numsSize*sizeof(int));
    if(arr == NULL)
    {
        *returnSize = 0;
        return 0;
    }
    for(int i=0;i<numsSize;i++)
    {
        arr[i] = nums[nums[i]];
    }
    *returnSize = numsSize;
    return arr;
}
int main()
{
  int nums[] = {0,2,1,5,3,4};
  int numsSize = sizeof(nums)/sizeof(int);
  int returnSize = 0;
  int *newArr = buildArray(nums,numsSize,&returnSize);
  for (int i = 0; i < numsSize; i++)
  {
    printf("%d ",nums[i]);
  }
  printf("\n");
  for (int i = 0; i < numsSize; i++)
  {
    printf("%d ",newArr[i]);
  }
  printf("\n");
}