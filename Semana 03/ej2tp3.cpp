///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;

///CICLO EXACTO: estructura que permite que un conjunto de instrucciones se repita una cantidad definida de veces

int main(){
    int i;
    ///i=1;-> valor inicial de la variable
    ///i<=5 ->condición que se analiza para saber si las instrucciones deben o no repetirse.
    /// Si es verdadero se ejecutan las instruciones contenidas en el ciclo; si es falso se termina el ciclo
    ///i++ incremento de la variable que controla el ciclo

    for(i=1;i<=10;i++){
        cout<<"DENTRO DEL FOR ";
        cout<<i<<endl;
    }
    cout<<"FUERA DEL FOR ";
    cout<<i<<endl;

	cout<<endl;
	system("pause");
	return 0;
}
