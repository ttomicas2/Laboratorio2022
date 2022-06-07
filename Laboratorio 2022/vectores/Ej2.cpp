#include <iostream>
#include <vector>
using namespace std;

int main(){
    int numero;
    int num_mayus = 0;
    int num_minus = 0;
    vector<int>numeros;
    while (numero != 0){
        cout<<"ingrese un numero "<<"cuando quiera la lista ingrese 0"<<endl;
        cin>>numero;
        if (numero != 0){
        numeros.push_back(numero);
        }
    }
    for (int i = 0; i < numeros.size(); i++){
        if (num_mayus < numeros[i]){
            num_mayus = numeros[i];
        }
        if (num_minus > numeros[i]){
            num_minus = numeros[i];
        }
    }
    cout<<"el numero mas grande es "<<num_mayus<<endl<< "el numero mas chico es "<<num_minus<<endl;
}