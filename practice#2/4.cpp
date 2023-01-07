#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the number here: ";
    int usersnumber;
    int additionaltnumber = 1;
    cin >> usersnumber;
    int answer = usersnumber;
    while (additionaltnumber != usersnumber) 
    {
        answer = additionaltnumber + answer; 
        additionaltnumber++;    
    }
    cout << "The sum of all number from 1 to " << usersnumber << " is " << answer;   
}