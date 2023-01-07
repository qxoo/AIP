#include <iostream>
using namespace std;
int main()
{
    int size, tempsize;
    cin >> size;
    tempsize = size;
    int arr[size]{};
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int iter = 0; iter < tempsize; iter++)
        {
            if (arr[i] < arr[i+iter])
            {
                arr[i] = arr[i]^arr[i+iter];
                arr[i+iter] = arr[i+iter]^arr[i];
                arr[i] ^= arr[i+iter];
            }
        }
        --tempsize;
    }
    cout << endl << "enter M number: ";
    int M;
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cout << endl << arr[i];
    }
    
}