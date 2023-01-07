#include <iostream>
#include <vector>
#include <set>
#include <iterator>
using namespace std; 
int main()
{
	int M; 
	vector <int> arr; 
	set <int> arr2;
	cout << "enter the amount of (M) elements: " << endl; cin >> M; 
	for (int i = 0; i < M; i++)
	{
		int element;
		cout << "Enter the array's element" << endl; cin >> element;
		arr.push_back(element);
	}
	for (int i = 0; i < M; i++)
	{
		arr2.insert(arr[i]);
	}
	cout << "Unique array's elements:" << endl;
	copy(arr2.begin(), arr2.end(), ostream_iterator<int>(cout, " "));
}