#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string frase;
    cout<<"Ingrese una frase con espacios"<<endl;
    getline(cin, frase, ' ');
    cout<<"La frase es "<<frase<<endl;
}
