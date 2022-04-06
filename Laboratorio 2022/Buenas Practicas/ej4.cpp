#include <iostream>
using namespace std;
int main(){
    int n;
    int resultado = 1;
    int resultado2 = 1;
    int contador = 0;
    cout<<"escriba un numero"<<endl;
    cin>>n;
    //secuencia de Fibbonacci
    if (n > 0)
    {
        while (n - 2 > contador ){
            resultado2 = resultado + resultado2;
            resultado = resultado2 + resultado;
            contador = contador + 2;
        }
        if (n == 1){
            cout<<"1"<<endl;
        }
        else if (n%2 == 0){
            cout<<resultado<<endl;
        }
        else{
                cout<<resultado2<<endl;
        }
    }
    else{
    cout<<"ingrese un numero natural y distinto de cero"<<endl;
    }   
}
