#include <iostream>
#include <vector>
using namespace std;
void mostrar_vector(vector<int>numeros){
    for(int i = 0; i < numeros.size(); i++){
        cout<<numeros[i]<<endl;
    }
}
void prolijo(vector<int>numeros){
    vector<int>prolijo;
    bool no_esta;
    for(int i = 0; i < numeros.size(); i++){
        no_esta = true;
        for(int e = 0; e < prolijo.size(); e++){
            if(numeros[i] == prolijo[e]){
                no_esta = false;
            }
        }
        if (no_esta == true){
            prolijo.push_back(numeros[i]);
        }
    }
    mostrar_vector(prolijo);
}
int main(){
    vector<int>numeros;
    int numero = 1;
    while (numero != 0){
        cout<<"ingrese un numero "<<"cuando quiera la lista ingrese 0"<<endl;
        cin>>numero;
        if (numero != 0){
        numeros.push_back(numero);
        }
    }
    prolijo(numeros);
}