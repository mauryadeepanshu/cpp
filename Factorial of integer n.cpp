#include <iostream>
#include <string>
using namespace std;

int main() {
  int x;
  int i = 1;
  int multiply = 1;
  
  cout << "Enter any integer to find the factorial: ";
  cin >> x;
  
  while (i <= x) {
    multiply *= i;
    i++;
  }
  
  cout << "Factorial of " << x << " is " << multiply;
  
  return 0;
}