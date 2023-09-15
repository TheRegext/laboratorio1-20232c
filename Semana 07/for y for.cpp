#include <iostream>
using namespace std;

int main() {
   int codigoDestino, numeroMes, cantidadPasajes;
   float totalRecaudado;
   
   /// PUNTO A
   int pa_cantidadTotal;
   
   /// PUNTO B
   float pb_recaudacionTotal;

   ///inicializamos cosas de todos
   pa_cantidadTotal = 0;
   
   for(int i=1; i<=5;i++){
      /// inicializamos cosas del grupo
      pb_recaudacionTotal = 0;
      
      for(int j=1; j<=12; j++){
         cout << "Ingrese codigo de destino turistico: ";
         cin >> codigoDestino;
         cout << "Ingrese numero de mes: ";
         cin >> numeroMes;
         cout << "Ingrese cantidad de pasajes vendido: ";
         cin >> cantidadPasajes;
         cout << "Ingrese la recaudacion total: ";
         cin >> totalRecaudado;
         
         /// calculamos o mostramos cosas de los registros
         
         pa_cantidadTotal += cantidadPasajes;
         pb_recaudacionTotal += totalRecaudado;
         
      }
      
      /// mostramos cosas del grupo
      
      cout << "PUNTO B: La recuadacion total del destino turistico es: " << pb_recaudacionTotal << endl;
   }
	/// mostramos cosas de todos
  
   cout << "PUNTO A: El total de pasajes vendidos es: " << pa_cantidadTotal << endl;
	return 0;
}



