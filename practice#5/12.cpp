
#include <iostream>
using namespace std;
int main()
{
    int ROW, COL, counter = 0, sum = 0;
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
    for (int i = 0; i < COL; i++)
    {
        if (arr[ROW][i] >= 0 );
        {
            ++counter;
            sum = sum + arr[ROW][i];
        }
    }
    cout << sum/counter;
}