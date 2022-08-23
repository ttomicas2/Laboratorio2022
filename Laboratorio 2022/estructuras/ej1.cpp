#include <iostream>
using namespace std;
struct Persona{
    string nombre;
    string apellido;
    int edad = -1;
};
Persona llenar(){
    Persona P1;
    cout<<"Ingrese nombre"<<endl;
    cin>>P1.nombre;
    cout<<"Ingrese apellido"<<endl;
    cin>>P1.apellido;
    while(P1.edad < 0 || P1.edad > 100){
        cout<<"Ingrese edad"<<endl;
        cin>>P1.edad;
        if(P1.edad < 0 || P1.edad > 100){
            cout<<"Ingrese una edad validarda"<<endl;
        }
    }
    return P1;
}

void mostrar(Persona P1){
    cout<<"Nombre:"<<P1.nombre<<endl<<"Apellido:"<<P1.apellido<<endl<<"Edad:"<<P1.edad<<endl;
}

int main(){
    Persona P1;
    P1=llenar();
    mostrar(P1);
}