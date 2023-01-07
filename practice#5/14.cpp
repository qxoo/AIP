#include <iostream>
#include <vector>
#include <cmath>
using namespace std; 
bool isPrime(int x)
{
	if (x <= 1)
		return 0;
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0) return 0;
	}
	return 1;
}
void ShowArray(vector <int> arr)
{
	int amount1 = 1;
	for (int i = 0; i < arr.size(); i++)
	{
		cout << "THe amount of prime elements " << 
			amount1 << " in a row = " << arr[i] << endl;
		amount1++;
	} 
}
int main()
{
	setlocale(LC_ALL, "rus");
	int COL;
	int ROW;
	cout << "Enter the number of columns" << endl; cin >> COL;
	cout << "Enter the number of rows" << endl; cin >> ROW;
	vector <vector <int>> matrix;
	vector <int> arr;
	matrix.resize(ROW); 
	for (int i = 0; i < ROW; i++)
	{
		matrix[i].resize(COL);
		for (int iter = 0; iter < COL; iter++)
		{
			int x; 
			cout << "Enter the matrixes element" << endl; cin >> x;
			matrix[i][iter] = x;
		}
	}
	for (int i = 0; i < ROW; i++)
	{
		int amount2 = 0;
		for (int iter = 0; iter < COL; iter++)
		{
			if (isPrime(matrix[i][iter]))
			{
				amount2++;
			}
		}
		arr.push_back(amount2);
	}
	ShowArray(arr);
}