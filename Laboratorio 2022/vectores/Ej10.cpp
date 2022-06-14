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
    vector<int>ordenado;
    int numero;
    while (numero != 0){
        cout<<"ingrese un numero entre 1 y 3 o ingrese 0 para parar"<<endl;
        cin>>numero;
        if (numero > 0 && numero <= 3){
        numeros.push_back(numero);
        }
        else{
            cout<<"ingrese un valido"<<endl;
        }
    }
    for(int i = 0; i < numeros.size(); i++){
        if(numeros[i] == 1){
            ordenado.push_back(numeros[i]);
        }
    }
    for(int i = 0; i < numeros.size(); i++){
        if(numeros[i] == 2){
            ordenado.push_back(numeros[i]);
        }
    }
    for(int i = 0; i < numeros.size(); i++){
        if(numeros[i] == 3){
            ordenado.push_back(numeros[i]);
        }
    }
    mostrar_vector(ordenado);
}