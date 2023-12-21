#include <iostream>
#include <string>

using namespace std;

int main () {
  int x, reverse = 0;
  
  cout << "Enter any number to reverse the number :";
  cin >> x;
  
  while (x > 0) {
    int digit = x % 10;
    reverse = reverse*10 + digit;
    x /=10;
    
  }
  cout << "your reversed  number is: " << reverse << endl;

  
  
  return 0;
}