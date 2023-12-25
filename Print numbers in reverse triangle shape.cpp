#include <iostream>
using namespace std;

  int main () {
  int x,i,j;
  
  cout<< "Print trianglr in reverse order: ";
  cin >>x;
  
  for (i = 1; i <= x; i++) {
  for (j = 1; j <= x-i+1; j++) {  // Use x(user input) x-i+1 to print anything in reverse
     cout << j;
  }
   cout << endl;
  }
return 0;
  }  
 