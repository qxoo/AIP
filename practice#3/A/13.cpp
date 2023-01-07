#include <iostream>
using namespace std;
int main()
{
    int firstnumber, secondnumber, option;
    cin >> firstnumber >> secondnumber >> option;
    int product = firstnumber*secondnumber*option;
    if (product % 2 == 0) cout << "chetn";
    else cout << "nechetn;";
}