#include <iostream>
#include <string>

using namespace std;

int main() {
  int i,x;
  

  cout << " You want the table of: ";
  cin >> x;
  
 
  
  for(i = 1; i <= 10; i++) {
    
  cout << x << " * " << i << " = " << x *i << endl;
  }
  
  return 0;
}