#include <iostream>
using namespace std;
int main()
{
    int size, counter = 0;
    cin >> size;
    int arr[size]{};
    for (int i = 0; i < size; i++)
    {
        counter++;
        cin >> arr[i];
    }
    for (int i = 0; counter != 0; i++)
    {   
        counter--;
        cout << endl << arr[counter];
    }
}