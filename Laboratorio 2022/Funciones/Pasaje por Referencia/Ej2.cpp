#include <iostream>
using namespace std;

void string_char(string &p, char &letra){
    p+=letra;
}

int main(){
    string palabra;
    char caracter;
    cout<<"Ingrese una palabra"<<endl;
    cin>>palabra;
    cout<<"Ingrese una letrarda bro"<<endl;
    cin>>caracter;
    string_char(palabra, caracter);
    cout<<palabra<<endl;
}
