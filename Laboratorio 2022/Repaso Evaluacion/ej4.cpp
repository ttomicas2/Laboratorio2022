#include<iostream>
using namespace std;
int main(){
    string palabra;
    string palabra2;
    int num;
    int posicion = 0;
    int posicion2 = 0;
    char caracter;
    cout<<"Ingrese una palabra"<<endl;
    cin>>palabra;
    palabra2 = palabra;
    cout<<"Ingrese un numero"<<endl;
    cin>>num;
    posicion = palabra.size() - num;
    while (palabra.size() > posicion)
    {
        caracter = palabra[posicion];
        palabra2[posicion2] = caracter;
        posicion++;
        posicion2++;
    }
    posicion = 0;
    while (posicion2 < palabra.size())
    {
        caracter = palabra[posicion];
        palabra2[posicion2] = caracter;
        posicion++;
        posicion2++;
    }
    cout<<palabra2<<endl;
}