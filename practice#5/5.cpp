#include <iostream>
using namespace std;
int main()
{
    int i, iter;
    int size;
    cin >> size;
    int arr1[size]{};
    for (i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }
    cout << endl << "enter the lenght of an additional array." << '\n';
    int addsize;
    cin >> addsize;
    cout << endl << "enter the additional array of denied values." << '\n';
    int arr2[addsize]{};
    for (iter = 0; iter < addsize; iter++)
    {
        cin >> arr2[iter];
    }
    int arr3[size]{};
    for (int i = 0; i < size ; i++)
    {
        int checker = 0;
        for (int iter = 0; iter < addsize; iter++)
        {
            if (arr1[i] == arr2[iter])
            {
                checker = 1;
            }
        }
        if (checker == 0) arr3[i] = arr1[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << endl << arr3[i];
    }
}