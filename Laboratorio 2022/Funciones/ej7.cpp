#include <iostream>
using namespace std;
int potencia(int num1, int num2, int resultado){
    int contador = 0;
    resultado = num1;
    while(contador < num2){
        resultado = resultado * num1;
        contador++;
    }
    return resultado;
}
int main(){
    int num1;
    int num2;
    int resultado;
    cout<<"Ingrese un numero"<<endl;
    cin>>num1;
    cout<<"Ingrese otro numero"<<endl;
    cin>>num2;
    resultado = potencia(num1, num2, resultado);
    cout<<resultado<<endl;
}