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
   
   // 2 + 1 => 3 / 2 => 1.5 => 1
   // 3 + 1 => 4 / 2 => 2
   // 8 + 1 => 9 / 2 => 4.5 => 4
   
   cout << "Pertenece al bimestre: " << ((mes + 1) / 2) << endl;
      
   return 0;
}

