#include <iostream>
using namespace std;
int main()
{
    int firstnumber, secondnumber, option;
    cout << "Please, enter two numbers defining a beggining and an ending of an interval and another one defining a point successively at once below." << endl << "____________________________"<< endl;
    cin >> firstnumber >> secondnumber >> option;
    if (option >=firstnumber && option <= secondnumber)
    {
        cout << "The dot enters the interval";
    }
    else
    {
        cout << "The dot doesn't enter the interval";
    }
}