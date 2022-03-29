#include <iostream>
using namespace std;
int main(){
    string palabra1;
    string palabra2;
    int posicion_actual = 0;
    int letras_correctas = 0;
    cout<<"escriba una palabra"<<endl;
    cin>>palabra1;
    cout<<"escriba una palabra"<<endl;
    cin>>palabra2;
    int cant_letras1 = palabra1.size();
    int cant_letras2 = palabra2.size();
    while (posicion_actual < cant_letras1 || posicion_actual < cant_letras2){
        char letra_palabra1 = palabra1[posicion_actual];
        char letra_palabra2 = palabra2[posicion_actual];
        if (letra_palabra1 == letra_palabra2){
            int posicion_letras = posicion_actual +1;
            letras_correctas++;
        }
        else{
            int posicion_letras = posicion_actual +1;
        }
        posicion_actual ++;
    }
    if (letras_correctas == palabra1.size()){
        cout<<"la palabra entra en palabra 2"<<endl;
    }
    else{
        cout<<"no entra en palabra2"<<endl;
    }  
}