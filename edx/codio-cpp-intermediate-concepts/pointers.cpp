#include <iostream>
using namespace std;

int main() {
    int* ptr;
    cout << ptr << endl;

    int a = 2; // regular int variable set to 2
    int* p = &a; // int pointer points to a's memory address
    cout << p << endl; // print a's address
    cout << *p << endl; // print a's value

    int** p2 = &p;
    cout << p2 << endl; // print p's address
    cout << *p2 << endl; // print a's address
    cout << **p2 << endl; // print a's value

    // array memory usage
    char names[3][6] = { "Alan", 
                         "Bob", 
                         "Carol" };
                         
    for (int i = 0; i < sizeof(names) / sizeof(names[0]); i++) {
      cout << names[i] << endl;
    }

    // the above can be written like what is below. This is better because
    // we don't need to know the length of the names.
    // The 'const' needs to be there for pointers that point to characters
    // within an array
    const char* names2[] = { "Alan", 
                             "Bob", 
                             "ChristopherJones" };
                         
    for (int i = 0; i < sizeof(names2) / sizeof(names2[0]); i++) {
      cout << names2[i] << endl;
    }

    return 0;
}
