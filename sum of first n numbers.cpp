#include <iostream>
#include <string>

using namespace std;
 int main  () {
   int x;
   int i = 1;
   int sum = 0;
   cout << "Enter the number to find sum of first n numbers: ";
   cin >> x;
   
   while (i <= x) {
   sum += i;
    }   
   
  
  cout << "Sum of the first " <<  x  << " number is " << sum;
   return 0;
  }
 
