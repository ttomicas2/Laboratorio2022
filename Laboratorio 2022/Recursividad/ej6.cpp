#include <iostream>
using namespace std;

int funcion(int n, bool p){
    if(n == 0){
        return p;
    }
    else{
        if(p){
            p = false;
            return funcion(n-1, p);
        }
        else{
            p = true;
            return funcion(n-1, p);
        }
    }
}

int main(){
    int n;
    bool p;
    string ashe;
    cout<<"Ingrese un numero"<<endl;
    cin>>n;
    cout<<"Ingrese True o False (T o F)"<<endl;
    cin>>ashe;
    if(ashe[0] == 'T'){
        p = true;
    }
    else{
        p = false;
    }
    p = funcion(n, p);
    (p)? cout<<"True"<<endl : cout<<"False"<<endl;
}