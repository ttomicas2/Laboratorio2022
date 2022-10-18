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

int primo(int n, int x, int cantPrimos){
    if(x==0){
        return cantPrimos;
    }
    else{
        bool divide = divisor(n,x);
        if(divide){
            cantPrimos++;
        }
        return primo(n,x-1,cantPrimos);
    }
}

int main(){
    int n,x,cantPrimos = 0;
    cout<<"Ingrese un numero"<<endl;
    cin>>n;
    x = n;
    if(n >= 0 && x >= 0){
        cantPrimos = primo(n,x,cantPrimos);
        if(cantPrimos == 2){
            cout<<"Es primo"<<endl;
        }
        else{
            cout<<"No es primo"<<endl;
        }
    }else{
        cout<<"No se puede hacer divisor de un numero negativo"<<endl;
    }
}