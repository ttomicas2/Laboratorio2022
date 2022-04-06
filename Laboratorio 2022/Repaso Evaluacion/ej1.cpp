#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"ingrese un numero"<<endl;
    cin>>n;
    int nada = 0;
    
    if (n<0){
        n = n * (-1);
    }
    int div1 = (n / 2);
    int div2 = ((n + 1) / 2);
    (div1 == div2) ? cout<<"es par"<<endl : cout<<"es impar"<<endl;
}