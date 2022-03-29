#include <iostream>
using namespace std;
int main(){
    string palabra;
    int posicion_actual = 0;
    int cant_mayus = 0;
    int cant_minus = 0;
    cout<<"escriba una palabra"<<endl;
    cin>>palabra;
    int cant_letras = palabra.size();
    while (posicion_actual <= cant_letras){
        char caracter = palabra[posicion_actual];
        int ASCII = caracter;
        posicion_actual ++;
        if (ASCII>64 && ASCII<91){
            cant_mayus++;
        }
        else if (ASCII>96 && ASCII<123){
            cant_minus++;
        }
    }
    cout<<"Mayusculas: ";
    cout<<cant_mayus<<endl;;
    cout<<"Minusculas: ";
    cout<<cant_minus<<endl;
}