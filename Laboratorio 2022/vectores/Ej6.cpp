#include <iostream>
#include <vector>
using namespace std;
void mostrar_vector(vector<float>numeros){
    for(int i = 0; i < numeros.size(); i++){
        cout<<numeros[i]<<endl;
    }
}
void reves(vector<float>numeros){
    vector<float>reves;
    int cont_reves = numeros.size() - 1;
    for(int i= 0; i < numeros.size(); i++){
        reves.push_back(numeros[cont_reves]);
        cont_reves--;
    }
    mostrar_vector(reves);
}
int main(){
    float numero = 1;
    vector<float>numeros;
    while (numero != 0){
        cout<<"ingrese un numero "<<"cuando quiera la lista ingrese 0"<<endl;
        cin>>numero;
        if (numero != 0){
        numeros.push_back(numero);
        }
    }
    reves(numeros);
}