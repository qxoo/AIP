#include <iostream>
#include <vector>
using namespace std; 
void ShowArray(vector <int> arr)
{
	int amount = 1; 
	for (int i = 0; i < arr.size(); i++)
	{
		cout << "Amount of elements lesser than " <<
			amount << " in a row = " << arr[i] << endl;
		amount++;
	}
}
int main()
{
	int COL;
	int ROW;
	cout << "Enter the amount of columns" << endl; cin >> COL;
	cout << "Enter the amount of rows" << endl; cin >> ROW;
	int M; 
	cout << "Enter the set value" << endl; cin >> M;
	vector <vector <int>> matrix;
	vector <int> arr;
	matrix.resize(ROW);
	for (int i = 0; i < ROW; i++)
	{
		matrix[i].resize(COL);
		for (int iter = 0; iter < COL; iter++)
		{
			int x; 
			cout << "Enter the array's element" << endl; cin >> x;
			matrix[i][iter] = x;
		}
	}
	for (int i = 0; i < ROW; i++)
	{
		int number = 0;
		for (int iter = 0; iter < COL; iter++)
		{
			if (matrix[i][iter] < M)
			{
				number++;
			}
		}
		arr.push_back(number);
	}
	ShowArray(arr);
}