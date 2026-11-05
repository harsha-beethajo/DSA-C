#include <iostream>
using namespace std;
int main()
{
    int i,j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            cout << (char)('a' + j-1) << " "; // also take i instead of j. (for another pattern)
        }
        cout << endl;
    }
    
}