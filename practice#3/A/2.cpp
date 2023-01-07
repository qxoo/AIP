#include <iostream>
using namespace std;
int main()
{
    int firstnumber, secondnumber, thirdnumber;
    cout << "Please, enter three numbers successively at once below." << endl << "____________________________"<< endl;
    cin >> firstnumber >> secondnumber >> thirdnumber;
        if(firstnumber>secondnumber) 
        {
            int swapnumber1 = 0;
            swapnumber1 = firstnumber;
            firstnumber = secondnumber;
            secondnumber = swapnumber1;
        }
        if(firstnumber>thirdnumber) 
        {
            int swapnumber2 = 0;
            swapnumber2 = firstnumber;
            firstnumber = thirdnumber;
            thirdnumber = swapnumber2;

        }
        if(secondnumber>thirdnumber)
        {
            int swapnumber3 = 0;
            swapnumber3 = secondnumber;
            secondnumber = thirdnumber;
            thirdnumber = swapnumber3;

        }
    cout << "Numbers in descending order: " << thirdnumber << ", " << secondnumber << ", " << firstnumber << "." << endl;

}