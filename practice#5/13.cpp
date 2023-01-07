#include <iostream>
using namespace std;
int main()
{
    int ROW, COL;
    cout << "enter amount of rows and then columns af the array: "<< endl;
    cin >> ROW >> COL;
    int arr[ROW][COL];
    for (int i = 0; i < ROW; i++) 
    {
        for (int iter = 0; iter < COL; iter++) 
        {
            cin >> arr[i][iter];
        }
    }
    cout << "enter th i number: " << endl;
    cin >> ROW;
    --ROW;
    int min = arr[ROW][0];
    for (int i = 1; i < COL; i++)
    {
        if (arr[ROW][i] < arr[ROW][i-1]) min = arr[ROW][i];
    }
    cout << min;
}
