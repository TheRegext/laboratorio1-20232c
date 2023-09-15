///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
///CUAL ES LA EDAD MAYOR PARA CADA CURSO
///CUAL ES LA EDAD MAYOR ENTRE TODOS LOS ALUMNOS, Y A QUE CURSO PERTENECE
/*
Ejemplo: dadas las edades de los alumnos de los cursos de TUP, calcular e informar la
edad máxima de cada uno de ellos.
Nota: no se sabe la cantidad de cursos. Se ingresa primero el número de curso,
y luego las edades de cada uno de los 25 integrantes del curso.
Para indicar el fin de los cursos se ingresa un valor de curso igual a cero.

- Calcular e informar la cantidad de cursos
- La edad mayor entre todos los cursos, indicando a que curso pertenece
- La cantidad de alumnos de más de 25 años de cada curso.
- El promedio de edad entre todos los alumnos
 */

int main(){

    const int ALUMNOS=5;
    int i, j, edad, eMaxima, nCurso;
    int pa_cant, pb_edadMayor, pb_curso, pc_cantidad;
    int pd_cantidad, pd_suma;
    
    
    
    
    pa_cant = 0;
    pb_edadMayor = 0;
    pd_cantidad = pd_suma = 0;
    
    cout<<"NUMERO DE CURSO ";
    cin>>nCurso;
    while(nCurso!=0){
        pa_cant++;
        pc_cantidad=0;
        eMaxima=0;
        for(i=1;i<=ALUMNOS;i++){
            cout<<"EDAD ";
            cin>>edad;
            if(edad>eMaxima){
                eMaxima=edad;
            }
            
            if(edad>pb_edadMayor){
               pb_edadMayor = edad;
               pb_curso = nCurso;
            }
            
            if(edad>25){
               pc_cantidad++;
            }
            
            pd_cantidad++;
            pd_suma += edad;
        }
        cout<<"PARA EL CURSO "<<nCurso<<" LA EDAD MAXIMA ES "<<eMaxima;
        cout<<endl;
        cout << "LA cantidad de alumnos son: " << pc_cantidad << endl;
        system("pause");
        system("cls");
        cout<<"NUMERO DE CURSO ";
        cin>>nCurso;
    }
    
    cout << "La cantidad de cursos son: " << pa_cant << endl;
    
    cout << "El mayor es: " << pb_edadMayor << " y pertenece al curso " << pb_curso << endl;
    
    if(pd_cantidad > 0){
       cout << "El promedio es: "<< (float)pd_suma/pd_cantidad << endl;   
    }
    
    
	return 0;
}
