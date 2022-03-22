#include <iostream>
using namespace std;
int main(){
    float num;
    cout<<"ingrese un numero"<<endl;
    cin>>num;
    if (num>0 && num<4 || num>6 && num<10){
        cout<<"el numero entra en los valores pedidos"<<endl;
    }
    else{
        cout<<"no entra entre los valores pedidos"<<endl;
    }
 
}