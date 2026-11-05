#include <iostream>
using namespace std;
int main()
{
    string str = "Hello world";
    string sub1 = str.substr(0,5);
    string sub2 = str.substr(6,5);
    cout << sub1 << " " << sub2 << endl;
}