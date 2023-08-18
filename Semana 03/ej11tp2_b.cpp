///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int num, cantPos;
    cantPos=0;
    cout<<"INGRESAR NUMERO ";
    cin>>num;
    if(num>0){
        cantPos++;
        /*cantPos=cantPos+1;
        cantPos+=1;
        ++cantPos;*/
    }
    cout<<"INGRESAR NUMERO ";
    cin>>num;
    if(num>0){
        cantPos++;
    }
    cout<<"INGRESAR NUMERO ";
    cin>>num;
    if(num>0){
        cantPos++;
    }
    cout<<"INGRESAR NUMERO ";
    cin>>num;
    if(num>0){
        cantPos++;
    }
    cout<<"INGRESAR NUMERO ";
    cin>>num;
    if(num>0){
        cantPos++;
    }
    cout<<"CANTIDAD DE POSITIVOS "<<cantPos;
	cout<<endl;
	system("pause");
	return 0;
}
