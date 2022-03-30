#include <iostream>
using namespace std;
int main(){
    string palabra1;
    string palabra2;
    string suma;
    int correcto = 0;
    int posicion_actual = 0;
    int letras_correctas = 0;
    int posicion_letras = 0;
    cout<<"escriba una palabra"<<endl;
    cin>>palabra1;
    cout<<"escriba otra palabra"<<endl;
    cin>>palabra2;
    int cant_letras1 = palabra1.size();
    int cant_letras2 = palabra2.size();
    while (posicion_actual < cant_letras1){
        suma = palabra1;
        while (posicion_letras < cant_letras1)
        {
            char letra = palabra2[posicion_letras];
            suma[posicion_letras] = letra;
            posicion_letras++;
            cout<<suma<<endl;
        }
        posicion_actual++; 
        if (suma == palabra1)
        {
            posicion_actual = posicion_actual + cant_letras2;
            correcto++;
            cout<<suma<<endl;
        }
        else
        {
            posicion_letras = posicion_actual;
        }
    }    
    if (correcto != 0)
    {
        cout<<"La primer palabra entra en la segunda"<<endl;
    }
    else
    {
        cout<<"La primer palabra no entra en la segunda"<<endl;
        cout<<suma<<endl;
    }
}