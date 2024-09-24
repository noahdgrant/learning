#include <ios>
#include <iostream>
using namespace std;

/*
 * Variable naming rules
 * 1. Start with a letter or underscore
 * 2. Remainder of variable name is letters, numbers, or underscores
 * 3. Cannot use a C++ keyword
 * 4. Variables are case sensitive
*/

int main() {
    // declaring (giving the variable a type)
    int number;
    bool true_or_false;
    char letter;
  
    // assigning (giving the variable a value)
    number = 99;
    true_or_false = true;
    letter = 'a';
  
    // accessing (retrieving the value of the data by printing)
    cout << number << endl;
    cout << true_or_false << endl;
    cout << letter << endl;
  
    float my_float = 0.5; // 4 bytes
    double my_double = 0.55; // 8 bytes

    bool my_bool = true;
    cout << my_bool << endl; // prints 1
    cout << boolalpha << my_bool << endl; // prints true

    string my_string = "Hello world";
    cout << my_string << endl;
  
    return 0;
}
