#include <clocale> 
#include <iostream> 
#include <Windows.h> 
#include "testlib.h" 
using namespace std; 
int main() { 
 setlocale(LC_ALL, "russian"); 
 SetConsoleOutputCP(1251); 
 SetConsoleCP(1251); 
 int n; 
 cin >> n; 
 int* a = new int[n]; 
 cout << "ВВЕДИТЕ СВОЙ МАССИВ\n"; 
 FillArray(a, n); 
 cout << "ВОТ ВАШ МАССИВ\n"; 
 ShowArray(a, n); 
 cout << endl; 
 cout << "СОРТИРОВКА МАССИВА\n"; 
 SortMeShow(a, n); 
 cout << '\n'; 
 cout << "МИНИМУМ И МАКСИМУМ ВАШЕГО МАССИВА\n"; 
 pair <int, int> result = SortMe(a, n); 
 cout << result.first << " " << result.second << '\n'; 
 cout << "ВВЕДИТЕ ЧИСЛО ОТНОСИТЕЛЬНО КОТОРОГО БУДЕМ СРАВНИВАТЬ\n"; 
 DeciderTo(a, n); 
 cout << '\n'; 
 cout << "МЕНЯЕМ ОТРИЦАТЕЛЬНЫЕ ЗНАЧЕНИЯ НА НУЛИ\n"; 
 MinusToZero(a, n); 
 cout << "\n"; 
 cout << "СУММА И ПРОИЗВЕДЕНИЕ ЭЛЕМЕНТОВ МАССИВА\n"; 
 pair <int, int> result2 = SummAndComposition(a, n); 
 cout << result2.first << " " << result2.second << '\n'; 
 cout << "КОЛИЧЕСТВО ПРОСТЫХ ЧИСЕЛ В МАССИВЕ\n"; 
 PrimeNum(a, n); 
 return 0;
}