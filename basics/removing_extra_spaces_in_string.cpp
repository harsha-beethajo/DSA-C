#include <iostream>
using namespace std;
int main()
{
    string str = "   5666           hi     how are you     ?   ";
    
    // 1. Collapse multiple consecutive spaces using erase
    for (int i = 0; i < (int)str.length() - 1; ) {
        if (str[i] == ' ' && str[i + 1] == ' ') {
            str.erase(i + 1, 1); // Removes the duplicate space at i + 1
        } else {
            i++;
        }
    }
    
    // 2. Remove leading space if it exists
    if (!str.empty() && str[0] == ' ') {
        str.erase(0, 1);
    }
    
    // 3. Remove trailing space if it exists
    if (!str.empty() && str.back() == ' ') {
        str.pop_back();
    }
   char ch = 'h';
   cout << str << endl;
   cout << "Size: " << str.size() << endl;
   cout << "index of "<< ch << " : " << str.find(ch,0)<<endl;
}