#include <iostream>
using namespace std;
int main(){
    int numero;
    int suma = 0;
    cout<<"ingrese un numero natural"<<endl;
    cin>>numero;
    //verificamos si el numero es natural
    if (numero > 0){
        //verificamos si es par o impar
        if (numero%2 == 1 ){
            while (numero > 1){
                numero = numero - 2;
                suma = suma + numero;
            }  
        }
        else{
            numero = numero -1;
            suma = suma + numero;
            while (numero > 1){
                numero = numero - 2;
                suma = suma + numero;
            }
        }
        cout<<suma<<endl;
    }
    else{
        cout<<"ingrese un numero natural"<<endl;
    }
}