#include <iostream>
using namespace std;

/**
 * Calculates factorial using recursion
 *
 * @param n, integer
 * @return factorial of n, integer
 */
int Factorial(int n) {
  if (n == 1) {
    return 1;
  } else {
    return n * Factorial(n - 1);
  }
}

/**
 * @param n, integer
 * @return Fibonacci number of n, integer
 */
int Fibonacci(int n) {
  if (n <= 1) {
    return n;
  } else {
    return (Fibonacci(n - 1) + Fibonacci(n - 2));
  }
}

int main() {
  cout << Factorial(5) << endl;
  cout << Fibonacci(3) << endl;

  return 0;
}
