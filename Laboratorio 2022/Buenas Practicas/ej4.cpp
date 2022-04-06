#include <iostream>
using namespace std;
int main(){
    int n;
    int resultado = 1;
    int resultado2 = 1;
    cout<<"escriba un numero"<<endl;
    cin>>n;
    //secuencia de Fibbonacci
    while (resultado < n && resultado2 < n)
    {
        resultado2 = resultado + resultado2;
        resultado = resultado2 + resultado;
    }
    if (n > resultado2)
    {
        cout<<resultado<<endl;      
    }
    else{
    cout<<resultado2<<endl;
    }
}
