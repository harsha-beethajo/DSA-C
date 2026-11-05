#include <iostream>
using namespace std;
int main()
{
    int fact=1,num;
    cout << "Enter a number: ";
    cin >> num;
    if (num == 0 || num == 1)
    {
        cout << "Factorial = 1" << endl;
        return 1;
    }
    else if(num > 1)
    {
        for (int i = num; i > 1; i--)
        {
            fact*=i;
        }
        cout << "Factorial = " << fact << endl;
    }
}