#include <iostream>
using namespace std;

int factorial(int n){
    if(n <= 1){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}

int main(){
    int n;
    cout<<"ingrese un numero"<<endl;
    cin>>n;
    if(n >= 0){
        int suma = factorial(n);
        cout<<suma<<endl;
    }else{
        cout<<"No se puede hacer factorial de un numero negro"<<endl;
    }
}