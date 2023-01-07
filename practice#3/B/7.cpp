#include <iostream>
using namespace std;
int main()
{
    int number, positive = 0, negative = 0, null = 0;
    int counter = 0;
    cin >> number;
    while (number != 777) 
    {
        if (number > 0) positive++;
        if (number == 0) null++;
        if (number < 0) negative++;
        cin >>number;
    }
    cout << "amount of positive numbers: " << positive << '\n' << "amount of negative numbers: " << negative << '\n' << "amount of nulls: " << null <<"\n";
}