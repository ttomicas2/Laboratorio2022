#include <iostream>
using namespace std;
int main(){
    char caracter;
    cout<<"ingrese un caracter"<<endl;
    cin>>caracter;
    int ASCII = caracter;
    if (ASCII>64 && ASCII<91)
    {
        cout<<"es mayuscula"<<endl;
    }
    else if (ASCII>96 && ASCII<123)
    {
        cout<<"es minuscula"<<endl;
    }
    else
    {
        cout<<"no es una letrarda anashe"<<endl;
    }
    
}    
    
