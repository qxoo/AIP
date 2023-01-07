#include <iostream>
using namespace std;
int main()
{
    int number;
    int counter = 0;
    cin >> number;
    while (number != 777) 
    {
        ++counter;
        if (number < 0)
        {
            cout << "negative number's order is: " << counter << endl;
        }
        cin >>number;
    }
}