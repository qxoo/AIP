#include <iostream>
#include<ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int aimnumber = rand() %100 +1;
    int number;
    cin >> number;
    while (number != aimnumber)
    {
        cin >> number;
        if (number == aimnumber) continue;
        if (number > aimnumber)
        {
            cout << "the guessed random number is lesser than the entered one. " << endl;
        }
        else
        {
            cout << "the guessed random number is greater than the entered one. " << endl;
        }
    }
    cout << "you've successfully guessed the aimnumber";
}