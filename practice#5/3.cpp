#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    --size;
    int arr[size]{};
    for (int i = 0; i <= size; i++)
    {
        cin >> arr[i];
    }
    int border;
    cout << "--------------" << endl << "Enter the number: ";
    cin >> border;
    for (int i = 0; i <= size; i++)
    {
        if ( arr[i] < border)
        {
            cout << arr[i] << ". order: " << i+1 << '\n';
        }
    }
}