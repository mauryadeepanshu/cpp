#include <iostream>

using namespace std;

int main () {
  int x,i,j;
  
  cout << "Enter numbers to print the reverse triangle: " ;
  cin >> x;
  
  for (i = 1; i <= x; i++) {
    for (j = x; j>= i; j--) {
      
      cout << j;
    }
    cout<<  endl;  
  }
  return 0;
}
/* The result will be :
8 7 6 5 4 3 2 1
7 6 5 4 3 2 1
6 5 4 3 2 1 
5 4 3 2 1
4 3 2 1
3 2 1
2 1 
1