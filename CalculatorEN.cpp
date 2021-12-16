#include<bits/stdc++.h>
using namespace std;

float addition(float a, float b = 0){
  return a + b;
}

float substraction(float a, float b = 0){
   return a - b;
}

float multiplication(float a, float b = 0){
  return a * b;
}

float division(float a, float b = 0){
  return a / b;
}

int main(){
   int a;
   int option;
   cout << "|----------------------------------| \n";
   cout << "|----------  CALCULATOR  ----------| \n";
   cout << "|----------------------------------| \n";
   cout << "|------ SELECT THE OPERATION ------| \n";
   cout << "|----------------------------------| \n";
   cout << "|-                                -| \n";
   cout << "|-       [0] None                 -| \n";
   cout << "|-       [1] Addition             -| \n";
   cout << "|-       [2] Substraction         -| \n";
   cout << "|-       [3] Multiplication       -| \n";
   cout << "|-       [4] Division             -| \n";
   cout << "|-                                -| \n";
   cout << "|----------------------------------| \n";
   cout << "|----------------------------------| \n";
   while(option != 0){
   cout << "\nWhat operation do you want to perform?" << endl;
   cout << "Enter zero [0] if you want to end the program " << endl;
   cin >> option;
   cout << endl;
   
   if(option == 1){
      int a, b;
      cout << "Enter a number:";
      cin >> a;
      cout << "Enter a number:";
      cin >> b;
      cout << "The result is:" << addition(a, b) << endl;
      cout << "\n";
   }
   else if(option == 2){
      int a,b;
      cout << "Enter a number:";
      cin >> a;
      cout << "Enter a number:";
      cin >> b;
      cout << "The result is:" << substraction(a, b) << endl;
      cout << "\n";
   }
   else if(option == 3){
     int a,b;
     cout << "Enter a number:";
     cin >> a;
     cout << "Enter a number:";
     cin >> b;
     cout << "The result is:" << multiplication(a, b) << endl;
     cout << "\n";
   }
   else if(option == 4){
     int a,b;
     cout << "Enter a number:";
     cin >> a;
     cout << "Enter a number:";
     cin >> b;
     cout << "The result is:" << division(a, b) << endl;
     cout << "\n";
   }
   else if(option == 0){
     cout << "Thanks for using the program, finishing..." << endl;
   }
   }
 return 0;
}
