#include <stdio.h>
// output to be: [2,5], finding the first and last occurrences of a given number!
// if not found, index = [-1,-1]
void SearchFirstLast(int arr[],int num, int size)
{
    int first = -1,last = -1;
    for (int i = 0; i<size; i++)
    {
       if (arr[i]==num)
       {
        first = i;
        break;
       }
       
    }
    for (int i = size-1; i>=0; i--)
    {
        if (arr[i] == num)
        {
          last = i;
          break;
        }
        
    }
    printf("index = [%d,%d]\n",first,last);

}
int main()
{
    int num;
    int arr[] = {1, 3, 5, 5, 5, 5, 5, 123, 125};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the number: ");
    scanf("%d",&num);
    SearchFirstLast(arr,num,n);
}