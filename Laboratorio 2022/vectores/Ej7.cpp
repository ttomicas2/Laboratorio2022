#include <iostream>
#include <vector>
using namespace std;
void mostrar_vector(vector<int>numeros){
    for(int i = 0; i < numeros.size(); i++){
        cout<<numeros[i]<<endl;
    }
}
int main(){
    int numero = 1;
    int num_menor = 2147483647;
    int num_mayus;
    float cont = -1;
    bool no_esta = false;
    vector<int>numeros;
    vector<int>ordenado;
    while (numero != 0){
        cout<<"ingrese un numero "<<"cuando quiera la lista ingrese 0"<<endl;
        cin>>numero;
        if (numero != 0){
        numeros.push_back(numero);
        }
    }
    for (int a = 0; cont < numeros.size(); a++){
        num_menor = 2147483647;
        no_esta = false;
        for (int i = 0; i < numeros.size(); i++){
            if (num_menor > numeros[i]){
                num_menor = numeros[i];
            }
        } 
        for(int e = 0; e < ordenado.size(); e++){    
            if (ordenado[e] != num_menor){
                no_esta = true;
            }
        }
        if (no_esta = true){
        ordenado.push_back(num_menor);
        }
        mostrar_vector(ordenado);
        cont++; 
    }
}