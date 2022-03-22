#include <iostream>
using namespace std;
int main(){
    float num1;
    float num2;
    float suma;

    cout<<"ingrese el numero mas chico"<<endl;
    cin>>num1;

    cout<<"ingrese el numero mas grande"<<endl;
    cin>>num2;

    while (num1 != num2)
    {
        num1 = num1 + 1;
        cout<<num1<<endl;
    }
    
    {
        cout<<"termina el programa"<<endl;
    }
    
    

}