#include <iostream>
using namespace std;
int main(){
    string palabra1;
    char letra;
    int posicion_actual = 0;
    char letra_mayus;
    cout<<"escriba una palabra"<<endl;
    cin>>palabra1;
    cout<<"escriba una letra"<<endl;
    cin>>letra;
    int ASCII_letra = letra;
    if (ASCII_letra > 96 && ASCII_letra < 123){
        while (posicion_actual < palabra1.size()){
            char letra_palabra1 = palabra1[posicion_actual];
            int ASCII_palabra1 = letra_palabra1;
            if (ASCII_palabra1 == ASCII_letra){
                ASCII_palabra1 = ASCII_palabra1 - 32;
                letra_mayus = ASCII_palabra1;
                palabra1[posicion_actual] = letra_mayus;
            }
            posicion_actual ++;
        }
        cout<<palabra1<<endl;
    }
    else{
        cout<<"Ingrese una minuscula"<<endl;
    }
}