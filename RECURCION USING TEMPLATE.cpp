#include <iostream>
using namespace std;
// Recursive template function for calculating factorial
template <class T>
T factorial(T n) {
  if (n == 0) {
    return 1; // Base case: factorial of 0 is 1
  } else {
    return n * factorial(n - 1); // Recursive step: n! = n * (n-1)!
  }
}

int main() {
  int num = 5;
  //long long fact_int = factorial(num); // Calling the template function with an integer

  cout << "Factorial of " << num << " is: " << factorial(num) <<endl;

  double num2 = 4.0;
  double fact_double = factorial(num2); // Calling the template function with a double
    
  cout << "Factorial of " << num2 << " is: " << fact_double <<endl;

  return 0;
}