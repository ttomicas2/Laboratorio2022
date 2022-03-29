#include <iostream>
using namespace std;
int main(){
    string palabra;
    int posicion_actual = 0;
    cout<<"escriba una palabra"<<endl;
    cin>>palabra;
    while (posicion_actual < palabra.size()){
        cout<<palabra[posicion_actual]<<endl;
        posicion_actual ++;
    }
}