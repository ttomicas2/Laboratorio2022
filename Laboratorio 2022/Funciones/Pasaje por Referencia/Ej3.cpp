#include <iostream>
using namespace std;

void variable(int &numero, char operador){
    if(operador == '+'){
        numero++;
    }
    else if(operador == '-'){
        numero--;
    }
    else{
        cout<<"sos un pete fuera de foda"<<endl;
    }
}

int main(){
    int numero;
    char operador;
    cout<<"Ingrese un numero"<<endl;
    cin>>numero;
    cout<<"ingrese un operador(+,-)"<<endl;
    cin>>operador;
    variable(numero, operador);
    cout<<numero<<endl;
}