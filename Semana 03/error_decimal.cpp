#include <iostream>
using namespace std;

int main() {
   
   float valor = 1.1;
   /// 1.1000001
   /// 1.10000000000001  
   
   cout << valor << endl;
   
   if(valor == 1.1f){
      cout << "Es 1.1" << endl;
   }
   else{
      cout << "No es 1.1" << endl;
   }
	
	return 0;
}

