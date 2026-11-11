#include <stdio.h>

// TWO POINTER technique
int TwoSum(int arr[],int arraySize,int target)
{
  int left = 0, right = arraySize-1;
  while (left < right)
  {
     if(arr[left]+arr[right]==target)
    {
        return 1;
    }
    if (arr[left]+arr[right]<target)
    {
        left++;
    }
    if (arr[left]+arr[right]>target)
    {
        right--;
    }
  }
  return 0;
  
}
int main()
{
   int arr[6] = {-8,1,4,6,10,45};
   int target = 16;
   int result = TwoSum(arr,6,target);
   if(result == 0)
   printf("Not found!\n");
   else
   {
    printf("target = %d Found\n",target);
   }
}