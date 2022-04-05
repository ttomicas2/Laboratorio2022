#include <iostream>
using namespace std;
int main(){
    string palabra;
    int posicion_actual = 0;
    char caracter;
    cout<<"escriba una oracion por favor se lo pido"<<endl;
    cin>>palabra;
    int cant_letras = palabra.size();
    while (posicion_actual <= cant_letras){
        caracter = palabra[posicion_actual];
        int ASCII = caracter;
        if (ASCII == 44)
        {
            ASCII = 32;
        }
        palabra[posicion_actual] = ASCII;
        posicion_actual++;
    }
    cout<<palabra<<endl;
}