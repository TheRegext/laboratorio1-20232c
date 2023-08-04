///Ejercicio: suma de dos números
///Autor:DEK
///Fecha:04/08/2023
///Comentario:

# include<iostream>

using namespace std;


int main(){
    int n1, n2;
    cout<<"INGRESE UN NUMERO ";
	cin>>n1;
	cout<<"INGRESE UN NUMERO ";
	cin>>n2;
	if(n1>n2){
        ///si es verdadero
        cout<<"EL NUMERO MAS GRANDE ES "<<n1;
	}
	else{
        ///si es falso puede ser que n2>n1 o que n1==n2
        if(n2>n1){
            cout<<"EL NUMERO MAS GRANDE ES "<<n2;
        }
        else{
            cout<<"LOS DOS NUMEROS SON IGUALES. SU VALOR ES "<<n1;
        }
	}
    cout<<endl<<endl;
	system("pause");
	return 0;
}
