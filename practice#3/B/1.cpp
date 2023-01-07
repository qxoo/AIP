#include <iostream>
using namespace std;
int main()
{
    int number;
    int counter = 0;
    cin >> number;
    while (number != 777) {
        ++counter;
        cin >>number;
    }
    cout << counter << '\n';
    
    
}