#include <iostream>
using namespace std;

int potenciometro(int n, int x){
    if(n == 0){
        return 1;
    }
    else if(n == 1){
        return x;
    }
    else{
        return x * potenciometro(n-1,x);
    }
}

int main(){
    int n,x;
    cout<<"Ingrese un numero"<<endl;
    cin>>n;
    cout<<"ingrese otro numero"<<endl;
    cin>>x;
    if(n >= 0 && x >= 0){
        int suma = potenciometro(n,x);
        cout<<suma<<endl;
    }else{
        cout<<"No se puede hacer potenciometro de un numero negativo"<<endl;
    }
}