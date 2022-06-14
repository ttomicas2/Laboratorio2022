#include <iostream>
#include <vector>
using namespace std;
void mostrar_vector(vector<int>numeros){
    for(int i = 0; i < numeros.size(); i++){
        cout<<numeros[i]<<endl;
    }
}
int main(){
    vector<int>factores;
    int entero = 1;
    int primo;
    cout<<"Ingrese un numero"<<endl;
    cin>>entero;
    for(int numero = 1; numero <= entero; numero++){
        primo = 0;
        for(int i = 1; i <= numero; i++){
            if (numero%i == 0){
                primo++;
            }
        }
        if (primo == 2){
            if(entero%numero == 0){
                factores.push_back(numero);
            }
        }
    }
    mostrar_vector(factores);
}