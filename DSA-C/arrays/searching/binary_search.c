#include <stdio.h>
int binarySearch(int arr[],int n,int x)
{
    int low=0, high=n-1;
    while (low <=high)
    {
        int mid = low + (high-low) / 2;
        if (arr[mid] > x)
            high = mid-1;
        else if (arr[mid] < x)
            low = mid+1;
        if(arr[mid]==x)
        return 1;
    }
    return 0;
    
}
int main()
{
    int num;
   int arr[] = {2,5,8,12,16,23,38,56,72,91};
   int n = sizeof(arr)/sizeof(arr[0]);
   printf("Enter the number which you want to search: ");
   scanf("%d",&num);
   if (binarySearch(arr,n,num) == 1)
     printf("Number found!");
   else
   printf("Number Not found");
   return 0;
}