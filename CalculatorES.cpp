#include<bits/stdc++.h>
using namespace std;

float adicion(float a, float b = 0){
  return a + b;
}

float sustraccion(float a, float b = 0){
   return a - b;
}

float multiplicacion(float a, float b = 0){
  return a * b;
}

float division(float a, float b = 0){
  return a / b;
}

int main(){
   int a;
   int opcion;
   cout << "|-------------------------------------| \n";
   cout << "|-----------  CALCULADORA  -----------| \n";
   cout << "|-------------------------------------| \n";
   cout << "|------ SELECCIONE LA OPERACIÓN ------| \n";
   cout << "|-------------------------------------| \n";
   cout << "|-                                   -| \n";
   cout << "|-          [0] Ninguna              -| \n";
   cout << "|-          [1] Adición              -| \n";
   cout << "|-          [2] Sustracción          -| \n";
   cout << "|-          [3] Multiplicación       -| \n";
   cout << "|-          [4] División             -| \n";
   cout << "|-                                   -| \n";
   cout << "|-------------------------------------| \n";
   cout << "|-------------------------------------| \n";
   while(opcion != 0){
   cout << "\nQué operación desea realizar?" << endl;
   cout << "Ingrese [0] si desea terminar el programa " << endl;
   cin >> opcion;
   cout << endl;
   
   if(opcion == 1){
      int a, b;
      cout << "Ingrese un número:";
      cin >> a;
      cout << "Ingrese un número:";
      cin >> b;
      cout << "El resultado es:" << adicion(a, b) << endl;
      cout << "\n";
   }
   else if(opcion == 2){
      int a,b;
      cout << "Ingrese un número:";
      cin >> a;
      cout << "Ingrese un número:";
      cin >> b;
      cout << "El resultado es:" << sustraccion(a, b) << endl;
      cout << "\n";
   }
   else if(opcion == 3){
     int a,b;
     cout << "Ingrese un número:";
     cin >> a;
     cout << "Ingrese un número:";
     cin >> b;
     cout << "El resultado es:" << multiplicacion(a, b) << endl;
     cout << "\n";
   }
   else if(opcion == 4){
     int a,b;
     cout << "Ingrese un número:";
     cin >> a;
     cout << "Ingrese un número:";
     cin >> b;
     cout << "El resultado es:" << division(a, b) << endl;
     cout << "\n";
   }
   else if(opcion == 0){
     cout << "Gracias por usar el programa, terminando..." << endl;
   }
   }
 return 0;
}