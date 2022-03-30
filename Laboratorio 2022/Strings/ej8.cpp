#include <iostream>
using namespace std;
int main(){
    string palabra1;
    string palabra2;
    string suma = "                                                ";
    cout<<"Escriba una palabra"<<endl;
    cin>>palabra1;
    cout<<"Escriba otra palabra de igual longitud"<<endl;
    cin>>palabra2;
    int posicion_ciclo = 0;
    int posicion_actual = 0;
    int posicion_actual2 = 1;
    if (palabra1.size() == palabra2.size()){
        while (posicion_ciclo < palabra1.size()){
            char letra1 = palabra1[posicion_ciclo];
            char letra2 = palabra2[posicion_ciclo];
            suma[posicion_actual] = letra1;
            suma[posicion_actual2] = letra2;
            posicion_actual = posicion_actual + 2;
            posicion_actual2 = posicion_actual2 +2;
            posicion_ciclo++;
        }
        cout<<suma<<endl;
    }
    else{
        cout<<"escriba 2 palabras de igual longitud"<<endl;
    }
}