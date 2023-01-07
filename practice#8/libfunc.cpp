#include <iostream> 
#include <string> 
#include <cmath> 
#include <vector>
using namespace std; 
 
int isprime(int element) { 
 int i = 2; 
 while (element % i != 0 && i <= sqrt(element)) { 
  ++i; 
 } 
 return i; 
} 
 
void FillArray(int* const arr, const int size) { 
 for (int now = 0; now < size; ++now) { 
  cin >> arr[now]; 
 } 
} 
void ShowArray(const int* const arr, const int size) { 
 for (int now = 0; now < size; ++now) { 
  cout << arr[now] << " "; 
 } 
} 
 
 
 
pair <int, int> SortMe(int* const arr, const int size) { 
 pair <int, int> minmax; 
 for (int j = 0; j < size; j++) { 
  int num_min = j; 
  for (int i = j; i < size; i++) { 
   if (arr[i] < arr[num_min]) { 
    num_min = i; 
   } 
  } 
  int temp; 
  temp = arr[j]; 
  arr[j] = arr[num_min]; 
  arr[num_min] = temp; 
 } 
 minmax.first = arr[0]; 
 minmax.second = arr[size - 1]; 
 return minmax; 
} 
void SortMeShow(int* const arr, const int size) { 
 for (int j = 0; j < size; j++) { 
  int num_min = j; 
  for (int i = j; i < size; i++) { 
   if (arr[i] < arr[num_min]) { 
    num_min = i; 
   } 
  } 
  int temp; 
  temp = arr[j]; 
  arr[j] = arr[num_min]; 
  arr[num_min] = temp; 
 } 
 for (auto now = 0; now < size; ++now) { 
  cout << arr[now] << " "; 
 } 
} 
 
 
 
void DeciderTo(const int* const arr, const int size) { 
 int decider, j = 0, tr = 0; 
 cin >> decider; 
 cout << "ЧИСЛА БОЛЬШЕ НАШЕГО ДЕСАЙДЕРА\n"; 
 for (int i = 0; i < size; ++i) { 
  if (arr[i] > decider) { 
   cout << arr[i] << " "; 
  } 
 } 
} 
 
 
void MinusToZero(const int* const arr, const int size) { 
 int* b = new int[size]; 
 for (auto now = 0; now < size; ++now) { 
  if (arr[now] < 0) { 
   b[now] = 0; 
  } 
  else { 
   b[now] = arr[now]; 
  } 
 } 
 for (auto now = 0; now < size; ++now) { 
  cout << b[now] << " "; 
 } 
} 
 
pair <int, int> SummAndComposition(const int* const arr, const int size) { 
 pair <int, int> sumandcom; 
 int tr = 0; 
 int tr1 = 1; 
 for (auto now = 0; now < size; ++now) { 
   tr += arr[now]; 
   tr1 *= arr[now]; 
 } 
 sumandcom.first = tr; 
 sumandcom.second = tr1; 
 return sumandcom; 
} 
 
void PrimeNum(const int* const arr, const int size) { 
 int tr = 0; 
 for (auto now = 0; now < size; ++now) { 
  if (isprime(arr[now]) > sqrt(arr[now])) { 
   ++tr; 
  } 
 } 
 cout << tr; 
}