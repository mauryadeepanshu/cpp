#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main () {
  int x;
  char choice;
  char F,K;

/*class Car {
  public:
    string brand;
    string model;
    int year;
    
};

int main() {
  Car carobj1;
  carobj1.brand = "BMW";
  carobj1.model = "X5";
  carobj1.year = 1947;
  
  Car carobj2;
  carobj2.brand = "Mahindra";
  carobj2.model = "Thar";
  carobj2.year = 2003;
  
  
 string firstname,BMW,Mercedes,Audi,Thar ; 
 int age, x,y,z; 
 
 cout << "Type your first name: ";
 cin >> firstname;
 
 
 cout << "your fullname is: " << firstname << " Maurya: \n "; 
 
 cout << "Enter your age: "; 
 cin >> age;
 
 
 cout << "You are " << age << " years old: \n ";
 
 if(age > 18) {
 cout <<  "Congratulation you are eligible for voting: \n ";
 
 } else if (age < 18) {
   cout << "Not eligible for voting: \n ";
 }
 
 cout << "Enter any number to find the square root of \n ";
 cin >> x;
 
 cout << " square root of " << x  << " is " << sqrt(x) << endl;

string myfavouritecars[4] = {"BMW","Mercedes","Audi","Thar"};
cout << "Type a number between 0 to 3 to get name of your favourite car: ";
cin >>y;
  if (y <= 3) {
    cout <<   myfavouritecars[y] << " is your "  << " favourite car ";
    
  }
  
  else if (y > 3) {
    
    cout << "please give number between 0 to 3 ";
  }
  
  cout << "Enter any number: ";
  cin >> z;
   if (z%2 == 0) {
     cout << "The number is even ";
   }
   else if ( z%2 !=0 ) {
     cout << "The number is odd ";
   }
   
   double a,b;
   char c;
  
   cout << "Enter the first number: ";
   cin >> a;
   
   
   cout << "Enter the second number: ";
   cin >> b;
    
   cout << "Enter the operators: ";
   cin >> c;

  switch (c) {

  case '+': 
    cout  << "Addition of both the number is: " << a + b;
    break;
  
    
  case '-' :
    cout << "Suntraction of the number is: " << a - b;
    break;
  
  case '*' :
  cout << "Multiplication of  the number is: " << a*b;
    break;

  case '/':
   cout << "Division of the number is: " << a/b; 



cout << carobj1.brand  << " " << carobj1.model  << " "  << carobj1.year <<"\n";
cout << carobj2.brand << " " << carobj2.model << " " << carobj2.year <<"\n";
*/






cout <<"Enter 'F' if you want to convert farhenhite into celcius or 'K' if u want to convert Kelvin into Celcius: ";
cin >> choice ;
  

if (choice == 'F') {
cout << "Enter the number you want to convert in Celcius: ";
cin >> x;
cout <<"The farhenhite temprature in celcius will be " << (x - 32) * 5/9;

}
 
 
else if (choice == 'K')  {
  cout << "Enter the number you want to convert in Celcius: ";
cin >> x;
cout <<"The Kelvin temprature in celcius will be " << (x - 273.15);


  }

else {
  cout << "Please choose between 'F' or 'K' ";
}


  
return 0;
  }
   
