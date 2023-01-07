#include <iostream>
#include <vector>
using namespace std; 

void ShowArray(vector <int> arr)
{
	int k = 1;
	for (int i = 0; i < arr.size(); i++)
	{
		cout << "In a " << k << " row elements are in a ascending order " << arr[i] << endl;
		k++;
	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	int COL;
	int ROW;
	cout << "Enter the amount of columns" << endl; cin >> COL;
	cout << "Enter the amount of rows" << endl; cin >> ROW;
	vector <vector <int>> matrix; 
	vector <int> arr;
	matrix.resize(ROW);
	for (int i = 0; i < ROW; i++)
	{
		matrix[i].resize(COL);
		for (int iter = 0; iter < COL; iter++)
		{
			int x;
			cout << "Enter the matris's element" << endl; cin >> x;
			matrix[i][iter] = x;
		}
	}
	for (int i = 0; i < ROW; i++)
	{
		bool flag = false;
		for (int iter = 0; iter < COL - 1; iter++)
		{
			int maxs = matrix[i][iter];
			if (matrix[i][iter + 1] > maxs)
			{
				flag = true;
			}
			else flag = false;
		}
		if (flag) arr.push_back(1);
		else arr.push_back(0);
	}
	ShowArray(arr);
}