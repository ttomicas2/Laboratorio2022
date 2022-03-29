#include <iostream>
using namespace std;
int main(){
    float num;
    float suma;
    
    cout<<"ingrese numeros para ir sumandolos cuando quiera ver el resultado ponga 0"<<endl;

    while (num !=0){
        cout<<"ingrese un numero"<<endl;
        cin>>num;
        suma = suma + num;
    }

    cout<<"su resultado es"<<endl;
    cout<<suma<<endl;
}