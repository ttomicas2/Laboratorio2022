#include <iostream>
using namespace std;
int main(){
    string palabra;
    int posicion_actual = 0;
    cout<<"escriba una palabra"<<endl;
    cin>>palabra;
    int cant_letras = palabra.size();
    while (posicion_actual <= cant_letras){
        cout<<palabra[posicion_actual]<<endl;
        posicion_actual ++;
    }
}