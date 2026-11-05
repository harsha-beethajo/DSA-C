#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int n=7;

   for (i = 1; i <= n/2+1; i++)
   {
      for (j = 1; j <= n/2+1; j++)
      {
        if (j <= n/2 - i+1)
        {
            cout << " ";
        }
        else
        cout << "*";
      }
      cout << endl;
   }
   
    for (i = 1; i <= n/2; i++)
    {
        for (j = 1; j <=n/2+1; j++)
        {
            if (j <= i)
            {
                cout << " ";
            }
            else
            cout << "*";
            
        }
        cout << endl;
    }
  
    
}