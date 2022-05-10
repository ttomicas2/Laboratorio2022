#include <iostream>
using namespace std;
bool divisor(bool es_divisor, int num1, int num2){
    (num1 % num2 == 0 ) ? es_divisor = true : es_divisor = false;
    return es_divisor;
}
int main(){
    int num1;
    int num2;
    cout<<"Ingrese un numero"<<endl;
    cin>>num1;
    cout<<"Ingrese otro numero"<<endl;
    cin>>num2;
    bool es_divisor = divisor(es_divisor, num1 , num2);
    if(es_divisor){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}