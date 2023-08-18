///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int num1, num2, num3, num4, num5, cantPos;
    cantPos=0;
    cout<<"INGRESAR NUMERO ";
    cin>>num1;
    cout<<"INGRESAR NUMERO ";
    cin>>num2;
    cout<<"INGRESAR NUMERO ";
    cin>>num3;
    cout<<"INGRESAR NUMERO ";
    cin>>num4;
    cout<<"INGRESAR NUMERO ";
    cin>>num5;

    if(num1>0){
        cantPos++;
        /*cantPos=cantPos+1;
        cantPos+=1;
        ++cantPos;*/
    }
    if(num2>0){
        cantPos++;
    }
    if(num3>0){
        cantPos++;
    }
    if(num4>0){
        cantPos++;
    }
    if(num5>0){
        cantPos++;
    }
    cout<<"CANTIDAD DE POSITIVOS "<<cantPos;
	cout<<endl;
	system("pause");
	return 0;
}
