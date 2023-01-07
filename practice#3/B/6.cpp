#include <iostream>
using namespace std;
int main()
{
    int number;
    int counter = 0;
    cin >> number;
    float average = 0;
    while (number != 777) {
        ++counter;
        average = average + number; 
        cin >>number;
    }
    average = (average / counter);
    cout <<  average << '\n';
    
    
}