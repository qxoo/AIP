#include <iostream>
using namespace std;
int main()
{
    int number, product = 1;
    int counter = 0;
    cin >> number;
    while (number != 777) {
        ++counter;
        product = product * number;
        cin >>number;
    }
    cout << product << '\n';
    
    
}