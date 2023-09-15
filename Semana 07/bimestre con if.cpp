#include <iostream>
using namespace std;

/**
Hacer un programa para ingresar un número de mes y listar por pantalla a que bimestre 
corresponde ese mes. Tener en cuenta esta lista.
Mes 1 y 2. Bimestre 1. Mes 3 y 4. Bimestre 2. Mes 5 y 6. Bimestre 3.
Mes 7 y 8. Bimestre 4. Mes 9 y 10. Bimestre 5. Mes 11 y 12. Bimestre 6.
En el diagrama NO debe utilizar ni Switch ni un IF con más de 3 salidas. 
Recordar también que la división directa puede generar un resultado con decimales, por 
ejemplo, si MES=7, entonces el cálculo de BIM=MES/2 da como resultado BIM=3,5.

*/

int main() {
   int mes;
   
   cout << "Ingrese mes: ";
   cin >> mes;
   
   if(mes == 1 || mes == 2){
      cout << "Es el bimestre 1";
   }
   
   if(mes == 3 || mes == 4){
      cout << "Es el bimestre 2";
   }
   
   if(mes == 5 || mes == 6){
      cout << "Es el bimestre 3";
   }
   
   if(mes == 7 || mes == 8){
      cout << "Es el bimestre 4";
   }
   
   if(mes == 9 || mes == 10){
      cout << "Es el bimestre 5";
   }
   
   if(mes == 11 || mes == 12){
      cout << "Es el bimestre 6";
   }
   	
	return 0;
}

