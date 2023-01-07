#include <iostream>
using namespace std;
int main()
{
    int firstnumber, secondnumber, thirdnumber;
    string order;
    cout << "Please, enter three numbers successively at once below." << endl << "____________________________"<< endl;
    cin >> firstnumber >> secondnumber >> thirdnumber;
    if ((firstnumber <= secondnumber && firstnumber >= thirdnumber) || (firstnumber >= secondnumber && firstnumber <= thirdnumber)) 
    {
         order = "the first";
    }
    if ((secondnumber <= firstnumber && secondnumber >= thirdnumber) || (secondnumber >= firstnumber && secondnumber <= thirdnumber))
    {
         order = "the second";
    }
    if ((thirdnumber <= secondnumber && thirdnumber >= firstnumber) || (thirdnumber >= secondnumber && thirdnumber <= firstnumber))
    {
         order = "the third";
    }
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
    cout << "The average value amongst all numbers is: " << secondnumber <<", and it was " << order << " entered number." << endl;

}