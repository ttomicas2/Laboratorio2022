#include <iostream>
#include <vector>
using namespace std;
bool esta_en_vector(vector<int>numeros, int numero){
    bool esta=false;
    for(int i = 0; i < numeros.size(); i++){
        if(numero == numeros[i]){
            esta = true;
        }
    }
    return esta;
}
int main(){
    int numero = 1;
    int numero_anterior;
    vector<int>numeros;
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
    cout<<"Ingrese un numero entero"<<endl;
    cin>>numero;
    bool esta = esta_en_vector(numeros, numero);
    (esta == true)? cout<<"true"<<endl : cout<<"False"<<endl; 
}