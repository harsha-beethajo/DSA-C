#include <stdio.h>

// pattern 1:
// void pattern(int num)
// {
//     for (int i = 0; i < num; i++)
//     {
//         if (i % 2 == 0)
//         {
//             for (int j = 0; j < num; j++)
//                 printf("%d",1);
//         }
//         else
//         {
//             for (int j = 0; j < num; j++)
//                 printf("%d",0);
//         }
//         printf("\n");
//     }
// }

// pattern 2:
//  void pattern(int num)
//  {
//      for (int i = 0; i < num; i++)
//      {
//          if (i % 2 == 0)
//          {
//              for (int j = 0; j < num; j++)
//                  printf("%d",0);
//          }
//          else
//          {
//              for (int j = 0; j < num; j++)
//                  printf("%d",1);
//          }
//          printf("\n");
//      }
//  }

// pattern 3:
//  void pattern(int num)
//  {
//      int i;
//      for (i = 0; i < num; i++)
//      {
//          if (i%2 == 0)
//          {
//              for (int j = 0; j < num; j++)
//              {
//                  (j%2 == 0) ? printf("%d",1):printf("%d",0);
//              }
//          }
//          else
//          {
//               for (int j = 1; j <= num; j++)
//              {
//                  (j%2 != 0) ? printf("%d",0):printf("%d",1);
//              }
//          }
//          printf("\n");
//      }
//  }

// pattern-4:
//  void pattern(int num)
//  {
//    for (int i = 0; i < num; i++)
//    {
//      for (int j = 0; j < num; j++)
//      {
//          printf("%2d",i-j);
//      }
//      printf("\n");
//    }
//  }
int main()
{
    int n;
    printf("enter the number of terms: ");
    scanf("%d", &n);
    pattern(n);
    return 0;
}