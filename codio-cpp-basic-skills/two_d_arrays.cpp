#include <iostream>
using namespace std;

int main() {
    string names[3][5];
    cout << sizeof(names) / sizeof(names[0]) << " rows" << endl;
    // both these print the same thing
    cout << sizeof(names[0]) / sizeof(string) << " columns" << endl;
    cout << sizeof(names[0]) / sizeof(names[0][0]) << " columns" << endl;

    // iterate over 2D array
    int digits[3][3] = { {1, 2, 3},
                         {4, 5, 6}, 
                         {7, 8, 9} };
    
    for (auto &i : digits) {
      for (auto j : i) {
        if ((j == 3) | (j == 6) | (j == 9)) {
          cout << j << endl;
        }
        else {
          cout << j << " ";
        }
      }
    }

    return 0;
}
