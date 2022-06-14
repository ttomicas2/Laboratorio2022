#include <iostream>
#include <vector>
using namespace std;
void mostrar_vector(vector<int>numeros){
    for(int i = 0; i < numeros.size(); i++){
        cout<<numeros[i]<<endl;
    }
}
void rotar_vector(vector<int>numeros){
    vector<int>rotado;
    int entero;
    cout<<"Ingrese un numero"<<endl;
    cin>>entero;
    int entero2 = entero;
    while(entero < numeros.size()){
        rotado.push_back(numeros[entero]);
        entero++;
    }
    for(int i = 0; i < entero2; i++){
        rotado.push_back(numeros[i]);
    }
    mostrar_vector(rotado);
}
int main(){
    vector<int>numeros;
    vector<int>rotado;
    int numero = 1;
    int numero_anterior = 0;
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
    rotar_vector(numeros);
}