#include <iostream>
using namespace std;

/**
   hace un programa que dada una lista de 10 numeros enteros,
   muestre el promedio de los numeros pares
*/
/**
   Contadores y Acumuladores
   Inicializa generalmente en 0 <-- se lo olvidan
   Operaciones:
      Contador: ++
      Acumulador: += N
   Suelen depender de una condicion
*/

int main() {
   int numero;
   int sumaPares, cantPares; // acumuladores y contadores
   float promedio;
   
   sumaPares = cantPares = 0;
   
   for(int i=1; i<=5; i++){
      cout << "Ingrese numero: ";
      cin >> numero;
      
      if(numero % 2 == 0){
         cantPares++; // cantPares += 1; // cantPares = cantPares + 1
         sumaPares += numero; // sumaPares = sumaPares + numero;
      }
   }
	
   //promedio = 1.0f * sumaPares / cantPares;
   promedio = (float)sumaPares / cantPares;
   
   
   cout << "El promedio es: " << promedio;
   
	return 0;
}

