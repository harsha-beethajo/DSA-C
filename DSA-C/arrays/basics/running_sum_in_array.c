#include <stdio.h>
#include <stdlib.h>
int *RunningSum(int *nums,int numsSize,int *returnSize)
{
  int *arr;
  arr = (int*)malloc(numsSize*sizeof(int));
  if (arr == NULL)
  {
    *returnSize = 0;
    return 0;
  }
  arr[0] = 0;
  for (int i = 0; i < numsSize; i++)
  {
    
     for (int j = 0; j <= i; j++)
     {
         arr[i] +=  nums[j];
     }
  }
  *returnSize = numsSize;
  return arr;
}
int main()
{
  int nums[] = {1,2,3,4,5,6,7,8,9,10};
  int numsSize = sizeof(nums)/sizeof(int);
  int returnSize = 0;
  int *newArr = RunningSum(nums,numsSize,&returnSize);
  for (int i = 0; i < numsSize ;i++)
  {
    printf("%d ",nums[i]);
  }
printf("\n");
  for (int i = 0; i < numsSize; i++)
  {
    printf("%d ",newArr[i]);
  }
  printf("\n");
  return 0;
}