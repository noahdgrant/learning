#include <ios>
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 5;

    cout << boolalpha << (a == b) << endl;
    cout << boolalpha << (a != b) << endl;
    cout << boolalpha << (a < b) << endl;
    cout << boolalpha << (a <= b) << endl;
    cout << boolalpha << (a > b) << endl;
    cout << boolalpha << (a >= b) << endl;
    cout << boolalpha << (a && b) << endl;
    cout << boolalpha << (a || b) << endl;

    cout << boolalpha << (! true) << endl;

    return 0;
}
