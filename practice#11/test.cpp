#include <iostream>
#include <Windows.h>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int main() {

    string s;
    getline(cin, s);
    if (s[0] == '\0') {
        return 0;
    }
    else {
        bool flag = false;
        for (size_t now = 0; now != s.size(); ++now) {
            if (isalpha(s[now])) {
                flag = true;
            }
        }
        if (flag == false) {
            return 0;
        }
    }
    ////////////////////////////________________1____________
    s.push_back(' ');
    size_t start = 0;
    size_t kol = 0;
    int tr = 0;
    for (size_t i = 0; i != s.size(); ++i) {
      kol++;
      if (s[i] == ' ') {
        string word = s.substr(start, kol-1);
        if (word[0] == word[word.size() - 1]) {
          ++tr;
          }
        kol = 0;
        for (char c : word) {
          cout << c;
        }
        cout << '\n';
      } else if (i > 0) {
        if (s[i - 1] == ' ') {
          start = i;
        }
      }
    }
    cout << tr;

    ////////////////_______________2_________________
    size_t decider;
    cin >> decider;
    size_t start = 0;
    size_t kol = 0;
    int tr = 0;
    s.push_back(' ');
    string answer = "";
    for (size_t i = 0; i != s.size(); ++i) {
      kol++;
      if (s[i] == ' ') {
        if (kol-1 != decider) {
          string word = s.substr(start, kol - 1);
          answer.append(word);
          answer.push_back(' ');
        }
        kol = 0;
      }
      else if (i > 0) {
        if (s[i - 1] == ' ') {
          start = i;
        }
      }
    }
    cout << answer;

    /// ////////// ______________ 3 ________________

    size_t start = 0;
    size_t kol = 0;
    s.push_back(' ');
    string answer = "";
    int tr = 0;
    bool summa = true;
    for (size_t i = 0; i != s.size(); ++i) {
      kol++;
      if (s[i] == ' ') {
        summa = true;
        string word = s.substr(start, kol - 1);
        for (size_t j = 0; j < word.size(); ++j) {
          tr = 0;
          for (size_t k = 0; k < word.size(); ++k) {
            if (word[j] == word[k] && j != k) {
              tr++;
            }
          }
          if (tr != 0) {
            summa = false;
          }
        }
        if (summa == true) {
          answer.append(word);
          answer.push_back(' ');
        }
        kol = 0;
      }
      else if (i > 0) {
        if (s[i - 1] == ' ') {
          start = i;
        }
      }
    }
    cout << answer;

    // /////////////_________ 4 _________________

    vector <int> v;
    size_t start = 0;
    size_t kol = 0;
    s.push_back(' ');
    string answer = "";
    int tr = 0;
    bool summa = true;
    int counter = 0;
    for (size_t i = 0; i != s.size(); ++i) {
      kol++;
      if (s[i] == ' ') {
        counter++;
        summa = true;
        string word = s.substr(start, kol - 1);
        for (size_t j = 0; j < word.size(); ++j) {
          tr = 0;
          for (size_t k = 0; k < word.size(); ++k) {
            if (word[j] == word[k] && j != k) {
              tr++;
            }
          }
          if (tr != 0) {
            summa = false;
          }
        }
        if (summa != true) {
          v.push_back(counter);
        }
        kol = 0;
      }
      else if (i > 0) {
        if (s[i - 1] == ' ') {
          start = i;
        }
      }
    }
    for (auto cs : v) {
      cout << cs << " ";
    }
    // //////////////_______5___________________________
      size_t start = 0;
      size_t kol = 0;
      s.push_back(' ');
      vector <int> v;
      string word1, word2;
      string answer = "";
      string ebala = "";
      int counter = 0;
      int num1; int num2;
      cin >> num1 >> num2;
      for (size_t i = 0; i != s.size(); ++i) {
        kol++;
        if (s[i] == ' ') {
          counter++;
          if (counter == num1) {
             word1 = s.substr(start, kol - 1);
          }
          else if (counter == num2) {
             word2 = s.substr(start, kol - 1);
          }
          kol = 0;
        }
        else if (i > 0) {
          if (s[i - 1] == ' ') {
            start = i;
          }
        }
      }
      swap(word1, word2);
      counter = 0;
      start = 0;
      kol = 0;
      for (size_t i = 0; i != s.size(); ++i) {
        kol++;
        if (s[i] == ' ') {
          counter++;
          if (counter == num1) {
            answer.append(word1);
            answer.push_back(' ');
          } else if (counter == num2) {
            answer.append(word2);
            answer.push_back(' ');
          } else {
            string word = s.substr(start, kol - 1);
            answer.append(word);
            answer.push_back(' ');
          }
          kol = 0;
        }
        else if (i > 0) {
          if (s[i - 1] == ' ') {
            start = i;
          }
        }
      }
      cout << answer;

      ////////////////__________________6_____________________
      size_t start = 0;
      size_t kol = 0;
      s.push_back(' ');
      vector <int> v;
      string word1;
      string word2;
      string answer = "";
      int counter = 0;
      size_t max_el = 0;
      size_t min_el = 1000;
      int min_i = 0;
      int max_i = 0;
      for (size_t i = 0; i != s.size(); ++i) {
        kol++;
        if (s[i] == ' ') {
          counter++;
          if (kol - 1 > max_el) {
              max_el = kol - 1;
              max_i = counter;
              word1 = s.substr(start, kol - 1);
          }
          else if (kol -1 < max_el && kol-1 < min_el) {
            min_el = kol -1;
            min_i = counter;
            word2 = s.substr(start, kol - 1);
          }

          kol = 0;
        }
        else if (i > 0) {
          if (s[i - 1] == ' ') {
            start = i;
          }
        }
      }
      cout << word1 << " " << word2;
      cout << endl;
      counter = 0;
      start = 0;
      kol = 0;
      for (size_t i = 0; i != s.size(); ++i) {
        kol++;
        if (s[i] == ' ') {
          counter++;
          if (counter == max_i) {
            answer.append(word2);
            answer.push_back(' ');
          }
          else if (counter == min_i) {
            answer.append(word1);
            answer.push_back(' ');
          }
          else {
            string word = s.substr(start, kol - 1);
            answer.append(word);
            answer.push_back(' ');
          }
          kol = 0;
        }
        else if (i > 0) {
          if (s[i - 1] == ' ') {
            start = i;
          }
        }
      }
      cout << answer;

      // ////////////___________7______________________
    size_t start = 0;
    size_t kol = 0;
    s.push_back(' ');
    string word1;
    int counter = 0;
    size_t max_el = 0;
    int max_i = 0;
    bool tr = true;
    for (size_t i = 0; i != s.size(); ++i) {
        kol++;
        if (s[i] == ' ') {
            counter++;
            string word = s.substr(start, kol - 1);
            tr = true;
            for (size_t j = 0; j < word.size(); ++j) {
                for (size_t k = 0; k < word.size(); ++k) {
                    if (word[j] == word[k] && j != k) {
                        tr = false;
                    }
                }
                if (tr) {
                    if (word.size() > max_el) {
                        max_el = word.size();
                        word1 = word;
                    }
                }
            }
            kol = 0;
        }
        else if (i > 0) {
            if (s[i - 1] == ' ') {
                start = i;
            }
        }
    }
    cout << word1 << " " << max_el;


    return 0;
}

