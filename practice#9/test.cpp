#include <iostream> 
#include <climits> 
#include <cmath> 
#include <vector> 
#include <map> 
#include <set> 
#include <Windows.h> 
#include <iomanip> 
#include <string> 
using namespace std; 
 
void set_cursor(int x, int y) { 
    COORD position; 
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); 
 
    position.X = x; 
    position.Y = y; 
    SetConsoleCursorPosition(hConsole, position); 
} 
 
void set_color(int attr) { 
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); 
    SetConsoleTextAttribute(hConsole, attr); 
} 

int main() { 
    set_color(0x10); 
    setlocale(LC_ALL, "russian"); 
    SetConsoleOutputCP(1251); 
    SetConsoleCP(1251); 
     
 
 
    int y[11][11]; 
    set_color(0x90); 
    for (auto now = 0; now <= 10; ++now) { 
      if (now == 0) { 
        cout << setw(4) << ""; 
      } 
      else { 
        cout << setw(4) << " " << now; 
      } 
    } 
    cout << '\n'; 
    for (int i = 1; i <= 10; ++i) { 
      set_color(0x90); 
      cout << setw(4) << i << " "; 
 
      for (int j = 1; j <= 10; j++) { 
        y[i][j] = i * j; 
        if ((i == j) || (i == 10) || (j == 10)) { 
          set_color(0x50); 
        } else if ((i == 5 || j == 5 )&& i <= 5 && j <= 5) { 
          set_color(0xA0); 
        } 
        else if ((i == 8 || j == 8) && i <= 8 && j <= 8) { 
          set_color(0xE0); 
        } 
        else { 
          set_color(0xF0); 
        } 
        cout << setw(4) << y[i][j] << " "; 
 
      } 
      cout << setw(4) << endl; 
    } 
    set_color(0x0F); 
}