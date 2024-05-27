#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    cout << 7 + 3 << endl;

    // cout doesn't print zeros after a decimal place unless those zeros
    // are enclosed by other non-zero digits
    cout << 7.0 + 3.0 << endl;

    // cout is considered non-specific
    // printf is considered specific

    printf("%d\n", 7 + 4);

    // Unless you want to be specific with how your data is printed, you should
    // always defauly to using cout. Only use printf() when formatting is important.

    int a = 0;

    a = a + 1;
    a += 1;
    a++;

    // String concatination
    string b = "Hello ";
    string c = "World!";
    string d = b + c;
    cout << d << endl;

    b += c;
    cout << b << endl;

    // square root and power
    cout << pow(2, 5) << endl;
    cout << sqrt(9) << endl;

    // stoi() -> string to int
    // stod() -> string to double
    // to_string() -> int, double, or boolean to string

    return 0;
}
