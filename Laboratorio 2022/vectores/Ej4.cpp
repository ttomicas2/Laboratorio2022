#include <iostream>
#include <vector>
using namespace std;
bool orden(vector<int>numeros){
    bool orden_ascendente = true;
    int numero_anterior = numeros[0];
    for(int i = 0; i < numeros.size(); i++){
        if(numeros[i] >= numero_anterior){
            numero_anterior = numeros[i];
        }
        else if (numeros[i] < numero_anterior){
            orden_ascendente = false;
        }
    }
    return orden_ascendente;
}
int main(){
    vector<int>numeros;
    int numero;
    while (numero != 0){
        cout<<"ingrese un numero "<<"cuando quiera la lista ingrese 0"<<endl;
        cin>>numero;
        if (numero != 0){
        numeros.push_back(numero);
        }
    }
    bool orden_ascendente = orden(numeros);
    if (orden_ascendente == true){
        cout<<"Esta en orden ascendente"<<endl;
    }
    else if (orden_ascendente == false){
        cout<<"NO esta en orden ascendente"<<endl;
    }
}