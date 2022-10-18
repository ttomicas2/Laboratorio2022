#include <iostream>
using namespace std;

bool divisor(int n, int x){
    if(n == 0){
        return true;
    }
    else if(n < 0){
        return false;
    }
    else{
        return divisor(n-x,x);
    }
}

int main(){
    int n,x;
    cout<<"Ingrese un numero"<<endl;
    cin>>n;
    cout<<"ingrese otro numero"<<endl;
    cin>>x;
    if(n >= 0 && x >= 0){
        bool divide = divisor(n,x);
        (divide) ? cout<<"true"<<endl : cout<<"false"<<endl;
    }else{
        cout<<"No se puede hacer divisor de un numero negativo"<<endl;
    }
}