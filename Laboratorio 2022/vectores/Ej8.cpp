#include <iostream>
#include <vector>
using namespace std;
void mostrar_vector(vector<int>numeros){
    for(int i = 0; i < numeros.size(); i++){
        cout<<numeros[i]<<endl;
    }
}
void concatenacion(vector<int>numeros, vector<int>numeros2){
    vector<int>concate;
    int i = 0;
    int e = 0;
    while(i <numeros.size() || e < numeros2.size()){
        if (numeros[i] <numeros2[e]){
            concate.push_back(numeros[i]);
            i++;
        }
        else if(numeros[i] == numeros2[e]){
            concate.push_back(numeros[i]);
            concate.push_back(numeros2[e]);
        }
        else{
            concate.push_back(numeros2[e]);
            e++;
        }
        if(e >= numeros2.size()){
            while(i < numeros.size()){
                concate.push_back(numeros[i]);
                i++;
            }
        }
        if(i >= numeros.size()){
            while(e < numeros.size()){
                concate.push_back(numeros2[e]);
                e++;
            }
        }
    }
    mostrar_vector(concate);
}
int main(){
    int numero = 1;
    int numero_anterior = 0;
    vector<int>numeros;
    vector<int>numeros2;
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
    numero = 1;
    while (numero != 0){
        cout<<"ingrese numeros en orden de menor a mayor"<<"cuando quiera la lista ingrese 0"<<endl;
        cin>>numero;
        if (numero != 0 && numero > numero_anterior){
        numeros2.push_back(numero);
        }
        if(numero < numero_anterior){
            cout<<"Ingrese los numeros en orden"<<endl;
        }
        numero_anterior = numero;
    }
    concatenacion(numeros, numeros2);
}