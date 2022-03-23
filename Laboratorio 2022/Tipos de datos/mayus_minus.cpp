#include <iostream>
using namespace std;
int main(){
    char caracter;
    int contador=0;
    int ASCII;
    while (contador == 0){
        cout<<"ingrese una letra"<<endl;
        cin>>caracter;
        ASCII = caracter;
        if (ASCII>64 && ASCII<91){
            cout<<"es mayuscula"<<endl;
            contador = 1;
    }
        else if (ASCII>96 && ASCII<123){
            cout<<"es minuscula"<<endl;
            contador = 1;
    }
        else{
            cout<<"no es una letrarda anashe"<<endl;
    }    
    }
}    
    
