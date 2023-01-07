#include <iostream>
#include <vector>
#include <set>
#include <iterator>
using namespace std; 

void ShowArray(vector<int> arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "\t";
	}
}
void FillArray(vector<int>& arr, const int m)
{
	for (int i = 0; i < m; i++)
	{
		int element;
		cout << "Enter the array's element" << endl;
		cin >> element;
		arr.push_back(element);
	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	int m; 
	vector <int> arr; 
	set <int> arr2;
	vector <int> indx;
	cout << "Enter the amount of elements" << endl; cin >> m;
	FillArray(arr, m); 
	for (int i = 0; i < m; i++)
	{
		int amount = 0;
		for (int iter = 0; iter < m; iter++)
		{
			if (arr[i] == arr[iter]) amount++;
		}
		if (amount > 1)
		{
			arr2.insert(arr[i]);
			indx.push_back(i);
		}
	}
	cout << "Repeating elements array: " << endl;
	copy(arr2.begin(), arr2.end(), ostream_iterator <int> (cout, " "));
	cout << endl << "Indexes array: " << endl;
	ShowArray(indx);
}