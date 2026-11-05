#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int *InsertionSort(int *arr, int arraySize)
{
    for (int i = 1; i < arraySize; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            swap(&arr[j], &arr[j - 1]);
            j--;
        }
    }
    return arr;
}
int main()
{
    int arr[] = {6, 2, 9, 5, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *sort = InsertionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}