///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;

///CICLO EXACTO: estructura que permite que un conjunto de instrucciones se repita una cantidad definida de veces

int main(){
    int num, cantPos, i;
    cantPos=0;
    ///i=1;-> valor inicial de la variable
    ///i<=5 ->condición que se analiza para saber si las instrucciones deben o no repetirse.
    /// Si es verdadero se ejecutan las instruciones contenidas en el ciclo; si es falso se termina el ciclo
    ///i++

    for(i=0;i<=5;i+=4){
        cout<<"INGRESAR NUMERO ";
        cin>>num;
        if(num>0){
            cantPos++;
        }
    }

    cout<<"CANTIDAD DE POSITIVOS "<<cantPos;
	cout<<endl;
	system("pause");
	return 0;
}
