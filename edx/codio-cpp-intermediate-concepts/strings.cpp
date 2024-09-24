#include <iostream>
using namespace std;

int main() {
    string my_string = "Hello world";
    int len_string = my_string.length();
    int my_character = my_string.at(1);

    cout << len_string << endl;

    cout << my_string[1] << endl;
    cout << my_string.at(1) << endl;

    // Mutibility
    // my_string.at(0) = "M" // Doesn't work since "M" is a string and not a char
    my_string.at(0) = 'M';

    // Find
    // returns 18446744073709551615 (uint) or -1 (int) if not found
    my_string = "The brown dog jumps over the lazy fox.";
    cout << my_string.find("dog") << endl;
    cout << my_string.find("he", 4) << endl; // start at index 4

    // String slice
    // if you don’t specify the number of characters, the system will start
    // copying from the start index through to the end of the string. If you
    // don’t specify the start index, then the system will copy the entire string.
    string my_slice = my_string.substr(4, 9); // (start index, number of characters)

    // Find first and last
    string string1 = "The brown dog jumps over the lazy fox.";
    string string2 = "brown";

    cout << string1.find_first_of(string2) << endl;
    cout << string1.find_last_of(string2) << endl;

    // Modifying
    my_string = "Today is Satur";
    my_string.push_back('d');
    cout << my_string << endl;

    my_string = "oday is Satur";
    my_string.insert(0, "T"); // beginning
    my_string.insert(my_string.length(), "day"); // end
    cout << my_string << endl;

    my_string = "Today is my birthday!";
    my_string.pop_back();
    cout << my_string << endl;

    my_string = "Today is my birthday!";
    my_string.erase(my_string.length()-1); // from this index to the end
    my_string.erase(2, 3); // (start index, number of characters)
    my_string.erase(); // entire string

    string1 = "Hello world!";
    string2 = "Codio.";
    string string3 = string1.replace(6, 5, string2);
    // erase all characters from index 6 plus 5 chars to the right in string1
    // then insert string2 at index 6 within string1
    cout << string3 << endl;

    string a = "High";
    string b = " Five";
    cout << a.append(b) << endl;

    // Change one character to uppercase or lowercase
    my_string = "the big brown dog";
    cout << char(toupper(my_string.at(0))) << endl;

    my_string = "THE BIG BROWN DOG";
    cout << char(tolower(my_string.at(1))) << endl;

    // Iterating over string
    my_string = "Hello world";

    for (int i = 0; i < my_string.length(); i++) {
        cout << my_string.at(i);
    }

    for (char c : my_string) {
        cout << c;
    }

    // Comparison
    string1 = "It's Friday!";
    string2 = "It's Friday!";
    cout << (string1 == string2);
    cout << (string1 != string2);

    // see which word comes first in the dictionary
    // negative number means first string, positive number means second string
    string1 = "apple";
    string2 = "cat";

    if (string1.compare(string2) < 0) {
        cout << "string1 comes first" << endl;
    }
    else if (string1.compare(string2) > 0) {
        cout << "string2 comes first" << endl;
    }
    else {
        cout << "the strings are equal" << endl;
    }

    // 1 comes before 9
    string1 = "123";
    string2 = "9";

    if (string1.compare(string2) < 0) {
        cout << "string1 comes first" << endl;
    }
    else if (string1.compare(string2) > 0) {
        cout << "string2 comes first" << endl;
    }
    else {
        cout << "the strings are equal" << endl;
    }

    return 0;
}
