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
    for(int foda = 0; foda <numeros.size() || foda < numeros2.size(); foda++){
        if (numeros[foda] <= numeros2[foda]){
            concate.push_back(numeros[foda]);
            concate.push_back(numeros2[foda]);
        }
        else if(numeros2[foda] < numeros[foda] ){
            concate.push_back(numeros2[foda]);
            concate.push_back(numeros[foda]);
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