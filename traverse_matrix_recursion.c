#include <stdio.h>
void TraverseMatrix(int arr[3][3],int i,int j)
{
    if(i==3)
    return;
    printf("%d ",arr[i][j]);
  if(j==2)
    TraverseMatrix(arr,i+1,j=0);
  else
    TraverseMatrix(arr,i,j+1);
}
int main()
{
  int arr[3][3];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
        scanf("%d",&arr[i][j]);
    }
  }
  TraverseMatrix(arr,0,0);
  return 0;
}