#include <iostream>
using namespace std;
int main()
{
    int num;
    int count = 0;
    cout << "Enter the factorial: ";
    cin >> num;
    while (num >= 5)
    { 
        num /= 5;
        count += num;
    }
    cout << count << " trailing zeros";
}