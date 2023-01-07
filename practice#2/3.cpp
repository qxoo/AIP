#include <iostream>
using namespace std;
int main()
{
    cout << "Enter your number here: ";
    int _aimnumber = 0;
    while (_aimnumber <= 1)
    {
        cin >> _aimnumber;
        if (_aimnumber <= 1)
        {
            cout << "Unfortunately, 1 or lesser numbers can't be defined as the prime ones by theorem. Nevertheless, you can try another number!"<< endl << "... here: ";
        }
    }
    int divisor = 1;
    while (divisor <= _aimnumber/2)
    {
        ++divisor;
        int remainder  = _aimnumber % divisor;
        if (remainder == 0)
        {
            cout << _aimnumber << " is not a prime number.";
            return -1;
        }
    }
    cout << _aimnumber << " is a prime number.";
    return -2;
}