#include <iostream>
#include <vector>
using namespace std;
void mostrar_vector(vector<int>numeros){
    for(int i = 0; i < numeros.size(); i++){
        cout<<numeros[i]<<endl;
    }
}
void factores(int entero){
    vector<int>factores;
    int primo;
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
int main(){
    int entero ;
    cout<<"Ingrese un numero"<<endl;
    cin>>entero;
    factores(entero);
}