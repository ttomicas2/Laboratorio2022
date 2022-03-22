#include <iostream>
using namespace std;
int main(){
    float num;
    cout<<"ingrese un numero"<<endl;
    cin>>num;
    if (num>0 && num<10){
        cout<<"esta entre 10 y 0"<<endl;
    }
    else{
        cout<<"no entra entre el 10 y el 0"<<endl;
    }
}