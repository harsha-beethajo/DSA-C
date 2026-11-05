#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int n=8;
    for (i = 1; i <= n/2; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    for (i = 1; i <= n/2+1; i++)
    {
         for (j = n/2+1; j >= i; j--)
        {
            cout << " * ";
        }
        cout << endl;
    }
    
}