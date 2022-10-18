#include <iostream>
using namespace std;

int funcion(int n){
    if(n == 1){
        return n;
    }
    else if(n%2==0){
        return -n + funcion(n-1);
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