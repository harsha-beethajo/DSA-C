#include <stdio.h>
void swap(int *a,int *b)
{
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}
int main() { 
int a[3][3], i, j, temp;

printf("Enter 9 elements:\n");

for(i = 0; i < 3; i++)
{
    for(j = 0; j < 3; j++)
    {
        scanf("%d", &a[i][j]);
    }
}
int arr[9];
int k =0;
for(i = 0; i < 3; i++)
{
    for(j = 0; j < 3; j++)
    {
        arr[k] = a[i][j];
        k++;
    }
}
// sorting
 for (i = 0; i < k-1; i++)
  {
    for (int j = 0; j < k-1-i; j++)
    {
        if(arr[j] > arr[j+1])
        {
            swap(&arr[j],&arr[j+1]);
        }
    }
  }

  k=0;
for(i = 0; i < 3; i++)
{
    for(j = 0; j < 3; j++)
    {
        a[i][j] = arr[k];
        k++;
    }
}

printf("Sorted matrix:\n");

for(i = 0; i < 3; i++)
{
    for(j = 0; j < 3; j++)
    {
        printf("%d\t", a[i][j]);
    }
    printf("\n");
}

return 0;

}