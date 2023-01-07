#include <iostream>
using namespace std;
int main()
{
    float denominator = 1, pi = 0;
    int i = 1;
    while(pi <= 3.13)
    {
        if (i % 2 == 1 )
        {
            pi = pi + (1/denominator);
        }
        else
        {
            pi = pi - (1/denominator);
        }
        denominator = denominator+2;
        ++i;
        if (i == 100001) pi= pi*4;
    }
    cout << pi << endl;
}