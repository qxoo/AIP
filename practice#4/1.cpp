#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0, c = 0;
    do
    {
        cin >> a >> b >> c;
    } 
    while ((a <= 0) || (b <= 0) || (c <= 0));
    if ((a + b > c) && (a + c > b) && (b + c > a)) 
        {
            cout << "triangel exists" << endl;
            if ((a*a + b*b == c*c)) cout << "triange is right-angled";
            if (( a == b ) || ( a == c) || ( b == c)) cout << "trianel isosceles";
        }
    else cout << "triangl dosnt exist";
}