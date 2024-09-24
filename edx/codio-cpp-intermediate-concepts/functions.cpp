// https://google.github.io/styleguide/cppguide.html#Function_Names
// https://www.doxygen.nl/index.html

/* Constants
const int kMyConstant = 100 - k prefix
const int MY_CONSTANT = 200 - all caps
*/

/**
 * This is an example of C++ documentation
 * 
 * @author  FirstName LastName
 * @version 1.0
 */
#include <iostream>
using namespace std;

/**
 * This function greets the user twice
 * 
 * @param   specify parameters if any
 * @return  specify return value if any
 */
void GreetTwice() {         // Capital camel case according to Google C++ style guide
  cout << "Hello" << endl;
  cout << "Hello" << endl;
}

/**
 * This function divides one integer by the other
 * 
 * @param num1 The first integer
 * @param num2 The second integer
 */
void Divide(int num1, int num2) {
  try {
    if (num2 == 0) {
      throw runtime_error("Cannot divide by zero.");
    }
    else {
      cout << num1 / num2 << endl;
    }
  }
  catch (runtime_error& e) {
    cout << e.what() << endl;
  }
}

int main() {
  GreetTwice();
  Divide(5, 0);
  return 0;
}

/* NOTE:
When an array is passed as a function argument in C++, the system treats the
array as a pointer that points to the first element within the array. Thus, the
parameter string array[] is the same as string* array. Due to this, knowledge of
the size of the array is lost. This is why it is a good practice to include an
integer parameter for functions involving arrays so that the size can be
calculated and stored before those functions are called.

void PrintArray(string array[])
void PrintArray(string array[], int size)
*/
/**
 * This function prints all values of an array
 * 
 * @param array A string array
 */
void PrintArray(string array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << endl;
  }
}

// Function overloading

/**
 * This function adds two integers together
 * 
 * @param num1 The first integer
 * @param num2 The second integer
 */
void Add(int num1, int num2) {
  cout << num1 + num2 << endl;
}

/**
 * This function prints an integer followed
 * by a string
 * 
 * @param num1 The integer
 * @param num2 The string
 */
void Add(int num1, string num2) {
  cout << num1 << num2 << endl;
}

/**
 * This function adds three integers together
 * 
 * @param num1 The first integer
 * @param num2 The second integer
 * @param num3 The third integer
 */
void Add(int num1, int num2, int num3) {
  cout << num1 + num2 + num3 << endl;
}
