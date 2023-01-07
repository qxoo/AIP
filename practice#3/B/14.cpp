#include <iostream>
using namespace std;
int main()
{
    int number, null;
    int counter = 0;
    cin >> number;
    while (number != 777) 
    {
        ++counter;
        cin >>number;
        if (number == 0) null = counter;
    }
    cout <<null + 1;
}