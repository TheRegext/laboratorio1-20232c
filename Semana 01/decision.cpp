///Ejercicio: suma de dos n�meros
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
        ///si es falso
        cout<<"EL NUMERO MAS GRANDE ES "<<n2;
	}
    cout<<endl<<endl;
	system("pause");
	return 0;
}
