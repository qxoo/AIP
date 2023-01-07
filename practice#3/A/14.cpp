#include <iostream>
using namespace std;
int main()
{
    int firstnumber, secondnumber, option;
    cin >> firstnumber >> secondnumber >> option;
    int product = firstnumber+secondnumber+option;
    if (product % 3 == 0) cout << "kratn";
    else cout << "nekratn;";
}