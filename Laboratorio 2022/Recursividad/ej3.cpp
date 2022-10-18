#include <iostream>
using namespace std;

int suma(int n, int n2){
    if(n == n2){
        return n2;
    }
    else{
        return suma(n, (n2+1));
    }
}

int main(){
    int n;
    int n2=0;
    cout<<"ingrese un numero"<<endl;
    cin>>n;
    if(n >= 0){
        int suma2 = suma(n, n2);
        cout<<suma2<<endl;
    }else{
        cout<<"Ingrese numeros positivos"<<endl;
    }
}