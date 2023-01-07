#include <iostream>
using namespace std;
int main()
{
    int size, i, iter, counter = 0;
    cin >> size;
    --size;
    int arr1[size]{};
    for (i = 0; i <= size; i++)
    {
        cin >> arr1[i];
    }
    cout << endl << "enter the lenght of an additional array." << '\n';
    int addsize;
    cin >> addsize;
    --addsize;
    cout << endl << "enter the additional array of accepted values." << '\n';
    int arr2[addsize]{};
    for (iter = 0; iter <= addsize; iter++)
    {
        cin >> arr2[iter];
    }
    for ( int i = 0; i <= size; i++)
    {
        for (int iter = 0; iter <= addsize; iter++)
        {
            if (arr1[i] == arr2[iter]) 
            {
                counter++;
            }
        }
    }
    cout << endl << counter;
}