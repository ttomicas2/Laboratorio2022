#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n <= 1){
        return n;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    int n;
    cout<<"Ingrese un numero"<<endl;
    cin>>n;
    if(n >= 0){
        int suma = fibonacci(n);
        cout<<suma<<endl;
    }else{
        cout<<"No se puede hacer fibonacci de un numero negativo"<<endl;
    }
}