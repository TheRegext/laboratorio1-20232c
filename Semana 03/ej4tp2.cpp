///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int num1, num2, difAbsoluta;
    int mayor, menor;
    cout<<"INGRESAR NUMERO ";
    cin>>num1;
    cout<<"INGRESAR NUMERO ";
    cin>>num2;
    if(num1>num2){
        mayor=num1;
        menor=num2;
    }
    else{
        mayor=num2;
        menor=num1;
    }
    difAbsoluta=mayor-menor;
    cout<<"DIFERENCIA ABSOLUTA "<<difAbsoluta;
	cout<<endl;
	system("pause");
	return 0;
}
