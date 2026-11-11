#include <stdio.h>
int main()
{
    int arr[8] = {1,2,0,3,4,0,5,0};
    int i,j=0;
    int temp[8];
    for (i = 0; i < 8; i++)
    {
        if (arr[i] != 0)
        {
            temp[j++] = arr[i];
        }
    }
    while (j<8)
        {
            temp[j++] = 0;
        }
    for (int i = 0; i < 8; i++)
    {
        printf("%d ",temp[i]);
    }
    printf("\n");

}