#include<iostream>;
using namespace std;

int main()
{
    int number, value, counter = 0;
	cin >> number;
	value = number;

	while (number != 777)
	{
		cin >> number;
		if (number == value)
		{
			counter++;
		}
		value = number;
	}
	cout << counter;
}