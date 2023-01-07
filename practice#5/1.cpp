#include <iostream>
using namespace std;
int main()
{
    int size, value;
    cin >> size;
    int arr[size]{};
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl << "with what value should elements' numbers be printed? " <<'\n';
    cin >> value;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value) cout << endl << i+1;
    }
    
}