#include <iostream>
using namespace std;
int main()
{
    int size, max, min, maxorder, minorder;
    cin >> size;
    --size;
    int arr[size];
    for (int i = 0; i <= size; i++)
    {
        cin >> arr[i];
    }
    max = arr[0];
    min = max;
    for (int i = 0; i <= size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            maxorder = i;
        }
        if (min > arr[i])
        {
            min = arr[i];
            minorder = i;
        }
    }
    arr[maxorder] = arr[maxorder] + arr[minorder];
    arr[minorder] = arr[maxorder] - arr[minorder];
    arr[maxorder] = arr[maxorder] - arr[minorder];
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " - ";
    }
}