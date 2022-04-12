#include <iostream>
using namespace std;
int main(){
    string palabra;
    char letra;
    int posicion_actual = 0;
    cout<<"ingrese una palabra"<<endl;
    cin>>palabra;
    cout<<"ingrese una letra"<<endl;
    cin>>letra;
    int cant_letras = palabra.size();
    while (cant_letras > posicion_actual){
        char caracter = palabra[posicion_actual];
        posicion_actual++;
        if (caracter == letra){
            cout<<"La letra esta en la "<<posicion_actual<<" posicion"<<endl;
            posicion_actual = 100;
        }
    }
}