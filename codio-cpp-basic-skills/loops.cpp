#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        cout << "Loop #" << i << endl;
    }

    int j = 0;
    while (j < 5) {
        cout << "Loop #" << j << endl;
        j++;
    }

  srand(time(NULL)); // start randomizer every time program runs
  while (true) {
    cout << "This is an infinite loop" << endl;
    int randNum = rand() % 100 + 1; // generate random number between 1 and 100
    
    if (randNum > 75) {
      cout << "The loop ends" << endl;
      break; // stop the loop
    } // end if condition
  } // end while loop
  
  cout << "The program ends" << endl;

    return 0;
}
