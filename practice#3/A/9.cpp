#include <iostream>
using namespace std;
int main()
{
    int firstnumber, secondnumber, option;
    cout << "Please, enter two numbers successively at once below." << endl << "____________________________"<< endl;
    cin >> firstnumber >> secondnumber;
    cout << "What operation with these numbers should be done?" << endl << "Enter the corresponding number." << endl << "1 - add,   2 - subtract,   3 - multiply, 4 - divide." << endl;
    cin >> option;
    switch(option)
    {
        case 1:
        cout << "Answer: " << firstnumber + secondnumber;
        break;
        case 2:
        cout << "Answer: " << firstnumber - secondnumber;
        break;
        case 3:
        cout << "Answer: " << firstnumber * secondnumber;
        break;
        case 4:
        cout << "Answer: " << firstnumber / secondnumber;
        break;
        default:
        cout << "Entered value isn't suitable for this program";
        break;

    }


}