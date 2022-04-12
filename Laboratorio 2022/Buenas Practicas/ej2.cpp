#include <iostream>
using namespace std;
int main(){
    int numero;
    int ciclos = 1;
    int correcto = 0;
    cout<<"ingrese un numero natural"<<endl;
    cin>>numero;
    //verificamos si el numero es natural
    if (numero >= 0){
        while (ciclos < numero){
            if (numero%ciclos == 0){
                correcto++;
            }
            ciclos++;
        }
        (correcto >= 2) ? cout<<"El numero no es primo"<<endl : cout<<"El numero es primo"<<endl;
    }
    else{
        cout<<"ingrese un numero natural"<<endl;
    }
}