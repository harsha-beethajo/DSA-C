#include <iostream>
#include <cmath>
using namespace std;

int amstrong(int num)
{
    int temp = num;
   int digit,sum=0,count = 0;
   while (num > 0)
   {
      count++;
      num /= 10;
   }
   num = temp;
   while (num > 0)
   {
      digit = num % 10;
      sum = sum + pow(digit,count);
      num /= 10;
   }
   if (sum == temp)
      return 1;
    return 0;

}
int main()
{
    int num;
    cin >> num;
    int ans = amstrong(num);
    cout << ((ans == 1)? "Yes" : "No") ;
}