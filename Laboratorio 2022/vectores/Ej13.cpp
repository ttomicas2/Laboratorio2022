#include <iostream>
#include <vector>
using namespace std;
void mostrar_vector(vector<int>numeros){
    for(int i = 0; i < numeros.size(); i++){
        cout<<numeros[i]<<endl;
    }
}
int main(){
    vector<int>numeros;
    vector<int>rotado;
    int numero = 1;
    int entero;
    int numero_anterior = 0;
    int vector_size;
    while (numero != 0){
        cout<<"ingrese numeros en orden de menor a mayor"<<"cuando quiera la lista ingrese 0"<<endl;
        cin>>numero;
        if (numero != 0 && numero > numero_anterior){
        numeros.push_back(numero);
        }
        if(numero < numero_anterior){
            cout<<"Ingrese los numeros en orden"<<endl;
        }
        numero_anterior = numero;
    }
    cout<<"Ingrese un numero"<<endl;
    cin>>entero;
    while (entero > 0){
        vector_size = numeros.size() - 1;
        while(vector_size >= 0){
            rotado.push_back(numeros[vector_size]);
            vector_size--;
        }
        entero--;
    }
    mostrar_vector(rotado);
}