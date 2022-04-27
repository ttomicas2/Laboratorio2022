#include <iostream>
using namespace std;
int modulo(int numero){
    //cout<<"el entero es "<<num1<<endl;
    //cout<<"el numero con coma es "<<num2<<endl;
    if (numero < 0)
    {
        numero = numero * (-1);
    }
    return numero;
    
}
int main(){
    //int num1;
    //float num2;
    //cout<<"decir numero entero"<<endl;
    //cin>>num1;
    //cout<<"ingrese un numero con coma"<<endl;
    //cin>>num2;
    //suma(num1, num2);
    int numero;
    int modulo_del_numero;
    cout<<"ingrese un numero"<<endl;
    cin>>numero;
    //modulo_del_numero = modulo(numero);
    //cout<<modulo(numero)<<endl;
    if (modulo_del_numero == 0){
        cout<<"es par"<<endl;
    }
    else{
        cout<<"es impar"<<endl;
    }
    
    
}    