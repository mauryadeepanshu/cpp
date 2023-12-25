#include <iostream>
#include <string>
using namespace std;

int main () {
  int x,i,j;
  
  cout << "Enter number to make tringle shape: ";
  cin >>x;
  
  for (i = 1;i<=x; i++) {
    for (j = 1; j <= i; j++){ // take i as row and j as a column when j = i the program prits a number and end the line 
      cout << j;
    } cout<<endl;
    }
   return 0;
}