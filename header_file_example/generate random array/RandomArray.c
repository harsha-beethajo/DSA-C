#include <stdlib.h>
#include <time.h>
#include "RandomArray.h"
void generateArray(int *arr)
{
    srand(time(NULL));

    for (int i = 1; i < 16; i++)
    {
        arr[i] = rand() % 16;

        if (arr[i] == 0)
            arr[i] = 10;

        for (int j = 1; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                i--;
                break;
            }
        }
    }
}
