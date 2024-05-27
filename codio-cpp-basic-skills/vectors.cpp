#include <iostream>
#include <vector>
using namespace std;

int main() {
    /* ARRAYS */

    // array (are static meaning size can't change after initialization)
    int ages[] = {71, 42, 37, 5, 18};

    cout << ages[0] << endl;

    ages[2] = 87;

    // print size of array
    cout << sizeof(ages) << endl;

    // print number of elements in the array
    cout << sizeof(ages)/sizeof(ages[0]) << endl;

    // An enhanced for loop, or range-based for loop, can be used with arrays
    for (int age : ages) {
        // prints each element in array
        cout << age << endl;
    }

    // finding min value in array
    int grades[] = {72, 84, 63, 55, 98};
    int min = grades[0]; //set min to the first element in the array

    for (int i : grades) { //enhanced for loop
      if (i < min) { //if element is less than min
        min = i; //set min to element that is less
      }
    }
    //elements are not modified so enhanced for loop can be used
    cout << "The lowest grade is " << min << endl; //print lowest element

    /* VECTORS */

    // vectors (are dynamic meaning their size can change after initialization)
    // int, float, and bool can be combined in a vector but not strings
    // 3 is the number of elements the vector has
    // vector elements are initialized to 0 by default
    vector<int> numbers(3); 

    cout << numbers.at(0) << endl; // at() get element as specific index
    cout << numbers.size() << endl; // size() returns the number of elements

    vector<string> names(0);
    names.push_back("Last"); // add element to the end of the vector
    names.insert(names.begin(), "First"); // add to front of the vector
    names.insert(names.begin() + 1, "Second"); // add to specific index
    names.pop_back(); // remove last element
    names.erase(names.begin()); // remove first element
    names.at(1) = "Updated"; // update spcific element

    // initialize vector with elements
    vector<int> nums{1, 2, 3, 4};

    // iterating over vector
    for (int i = 0; i < nums.size(); i++) {
        cout << nums.at(i) << endl;
    }

    // can use 'auto' to automatically figure out the type of elements in
    // the vector
    for (auto num : nums) {
        cout << num << endl;
    }

    // reversing the order of elements
    vector<string> letters(0);
    letters.push_back("A");
    letters.push_back("B");
    letters.push_back("C");
    letters.push_back("D");
    letters.push_back("E");
        
    int original = letters.size(); //original size
        
    //regular for loops needed to access element indices
    
    for (int i = letters.size() - 1; i >= 0; i--) {
      letters.push_back(letters.at(i));
    } //add elements in reverse order to the vector
        
    for (int j = 0; j < original; j++) {
      letters.erase(letters.begin());
    } //remove all the original elements
    
    //enhanced for loop can be used for just printing
    for (auto a : letters) {
      cout << a << " "; //print all new vector elements
    }

    return 0;
}
