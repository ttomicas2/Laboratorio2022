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
            cout<<"Las letras de la posicion "<<posicion_letras<<" son iguales"<<endl;
            letras_correctas++;
        }
        else{
            int posicion_letras = posicion_actual +1;
            cout<<"Las letras de la posicion "<<posicion_letras<<" no son iguales"<<endl;
        }
        posicion_actual ++;
    }
    (letras_correctas == posicion_actual) ? cout<<"Las palabras son iguales"<<endl : cout<<"Las palabras son distintas"<<endl;  
}