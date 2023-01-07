#include <iostream>
using namespace std;
int main()
{
    int number, max = 0, order;
    int counter = 0;
    cin >> number;
    while (number != 777) {
        ++counter;
        cin >>number;
        if ( max < number ) 
        {
            max = number;
            order = counter + 1;
        } 
    }
    cout << endl <<  order << '\n';
    
    
}