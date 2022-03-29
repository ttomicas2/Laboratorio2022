#include <iostream>
using namespace std;
int main(){
    string palabra;
    cout<<"escriba una palabra"<<endl;
    cin>>palabra;
    string palabra1 = palabra;
    int posicion_actual = palabra.size() -1;
    int posicion_letra = 0;

    while (posicion_actual < palabra.size()){
        char caracter = palabra1[posicion_actual];
        palabra[posicion_letra] = caracter;
        posicion_actual--;
        posicion_letra++;
    }
    if (palabra == palabra1){
        cout<<"es capicua"<<endl;
    }
    else{
        cout<<"no es capicua"<<endl;
    }
}