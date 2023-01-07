#include <iostream>
using namespace std;
int main()
{
    int number, sum = 0;
    int counter = 0;
    cin >> number;
    while (number != 777) {
        ++counter;
        sum = sum + number;
        cin >>number;
    }
    cout << sum << '\n';
    
    
}