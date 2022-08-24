#include <iostream>
#include <vector>
using namespace std;
struct Alumno{
    string nombre;
    string apellido;
    int edad = -1;
    vector<float>notas;
};

vector<Alumno>llenar(vector<Alumno>Alumnos){
    Alumno A1;
    float nota;
    int cant_alumnos = 0;
    while(cant_alumnos <= 0){
        cout<<"Cuantos alumnos quiere ingresar"<<endl;
        cin>> cant_alumnos;
        if(cant_alumnos <= 0){
            cout<<"Ingrese una opcion valida"<<endl;
        }
    }
    for(int i = 0; i < cant_alumnos; i++){
        nota = 1;
        A1.edad=-1;
        cout<<"Ingrese nombre"<<endl;
        cin>>A1.nombre;
        cout<<"Ingrese apellido"<<endl;
        cin>>A1.apellido;
        while(A1.edad < 0 || A1.edad > 100){
            cout<<"Ingrese edad"<<endl;
            cin>>A1.edad;
            if(A1.edad < 0 || A1.edad > 100){
                cout<<"Ingrese una edad validarda"<<endl;
            }
        }
        while(nota>0){
            cout<<"ingrese nota o 0 para terminar"<<endl;
            cin>>nota;
            if(nota>0){
                A1.notas.push_back(nota);
            }
        }
        Alumnos.push_back(A1);
    }
    return Alumnos;
}

void mostrar (vector<Alumno>Alumnos){
    float nota_alta = 0;
    int edad;
    bool hay_edad = false;
    cout<<"Ingrese una edad"<<endl;
    cin>>edad;
    for(int i = 0; i < Alumnos.size(); i++){
        if(Alumnos[i].edad == edad){
            for(int e = 0; e < Alumnos[i].notas.size(); e++){
                if(Alumnos[i].notas[e] > nota_alta){
                    nota_alta = Alumnos[i].notas[e];
                }
            }
            hay_edad=true;
        }
    }
    if(hay_edad == true && nota_alta != 0){
    cout<<"La nota mas alta de esa edad es: "<<nota_alta<<endl;
    }
    else if(hay_edad == false){
        cout<<"No hay alumnos con esa edad"<<endl;
    }
    else{
        cout<<"No hay notas con esa edad"<<endl;
    }

}

int main(){
    vector<Alumno>Alumnos;
    Alumnos=llenar(Alumnos);
    mostrar(Alumnos);
}