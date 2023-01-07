#include <iostream>
using namespace std;
int main()
{
    int number, divisor = 10, sum = 0, remainderer = 1;
    cin >> number;
    while (remainderer <= number)
    {
        sum = ((number % divisor)/remainderer) + sum;
        divisor = divisor * 10;
        remainderer = remainderer *10;
    }
    cout << sum;
}