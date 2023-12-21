#include <iostream>
#include <string>

using namespace std;

int main () {
  int i,x,p = 0, q = 1, r;
  
  cout << "Enter the number for which you wnat to generate: ";
  cin >> x;
  
  for (i = 0; i < x; i++) {
    if (i < 1 ) {
      r = i;
    
      
    }  else {
        r = p + q;
        p = q;
        q = r;
      }
      
      cout << r <<endl; 
      
    }
    return 0;
  }