#include <iostream>
using namespace std;

int funcion(int n){
    if(n == 0){
        return n;
    }
    else{
        return n + funcion(n-1);
    }
}

int main(){
    int n;
    cout<<"Ingrese un numero"<<endl;
    cin>>n;
    int suma = funcion(n);
    cout<<suma<<endl;
}