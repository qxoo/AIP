#include <iostream>
using namespace std;
int main()
{
    int number, min = 0, order;
    int counter = 0;
    cin >> number;
    while (number != 777) {
        ++counter;
        cin >>number;
        if ( min > number ) 
        {
            min = number;
            order = counter + 1;
        } 
    }
    cout <<  order << '\n';
    
    
}