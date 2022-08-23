#include <iostream>
#include <vector>
using namespace std;
struct Alumno{
    string nombre;
    string apellido;
    int edad = -1;
    float nota;
};
vector<Alumno>llenar(vector<Alumno>Alumnos){
    Alumno A1;
    for(int i = 0; i < 3; i++){
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
        cout<<"ingrese nota"<<endl;
        cin>>A1.nota;
        Alumnos.push_back(A1);
    }
    return Alumnos;
}

void mostrar(vector<Alumno>Alumnos){
    for(int i = 0; i < Alumnos.size(); i++){
        cout<<"Nombre:"<<Alumnos[i].nombre<<endl<<"Apellido:"<<Alumnos[i].apellido<<endl<<"Edad:"<<Alumnos[i].edad<<endl<<"Nota:"<<Alumnos[i].nota<<endl;
    }
}

int main(){
    vector<Alumno>Alumnos;
    Alumnos=llenar(Alumnos);
    mostrar(Alumnos);
}