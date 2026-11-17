#include <stdio.h>
#include "RandomArray.h"

int main()
{
   int arr[16];
   generateArray(arr); //random array generating
   for (int i = 1; i < 16; i++)
    printf("%d ",arr[i]);

    return 0;
}