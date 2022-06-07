#include <iostream>
#include <vector>
using namespace std;
int main(){
    int numero;
    bool numero_esta = false;
    vector<int>numeros(10);
    for(int i = 0; i < 10; i++){
        cout<<"escriba un numero"<<endl;
        cin>>numero;
        numeros.push_back(numero);
    }
    cout<<"ingrese un ultimo numero"<<endl;
    cin>>numero;
    for(int i = 0; i < numeros.size(); i++){
        if(numero == numeros[i]){
            cout<<"Su numero esta en el vector"<<endl;
            numero_esta=true;
        }
    }
    if(numero_esta == false){
        cout<<"Su numero NO está"<<endl;
    }
}