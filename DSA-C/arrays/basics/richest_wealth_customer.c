#include <stdio.h>
#include <stdlib.h>
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) 
{
    int sum[accountsSize];
  
    for (int i = 0; i < accountsSize; i++)
    {
        sum[i] = 0;
        for (int j = 0; j < accountsColSize[i]; j++)
        {
            sum[i] += accounts[i][j];
        }
    }
    int max = sum[0];
    for (int i = 0; i < accountsSize; i++)
    {
        if (max < sum[i])
        {
            max = sum[i];
        }
    }
    return max;
    
}
int main()
{
   int arr[2][3] = {{2,3,8},{1,4,5}};

   int *accounts[2] = {arr[0],arr[1]};
   int accountsColSize[2] = {3,3}; 
   int max = maximumWealth(accounts,2,accountsColSize);
     
   printf("max = %d\n",max);
   
   
}