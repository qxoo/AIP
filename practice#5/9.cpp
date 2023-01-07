#include <iostream>
#include <vector>
using namespace std; 

int main()
{
	int M; 
	vector <int> arr; 
	vector <int> arr2;
	cout << "enter the amount of array's elements 'M' " << endl; cin >> M;
	for (int i = 0; i < M; i++)
	{
		int element; 
		cout << "enter the array's element" << endl; cin >> element; 
		arr.push_back(element);
	}
	for (int i = 0; i < M; i++)
	{
		int amount = 0;
		for (int iter = 0; iter < M; iter++)
		{
			if (arr[i] == arr[iter]) amount++;
		}

		if (amount == 1)
		{
			arr2.push_back(i);
		}
	}
	for (int i = 0; i < arr2.size(); i++)
	{
		cout << arr2[i] << "\t";
	}
}