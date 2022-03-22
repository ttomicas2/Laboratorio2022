#include <iostream>
using namespace std;
int main(){
    float num;
    float suma;
    float num2;
    
    cout<<"ingrese numeros para ir sumandolos cuando quiera ver el resultado ponga 0"<<endl;

    while (num !=0)
    {
        cout<<"ingrese un numero"<<endl;
        cin>>num;
   
    
        if (num ==0)
        {
            cout<<"su resultado es"<<endl;
            cout<<suma<<endl;
        }
        else
        {
            num2 = num + num;
            suma = num + num2;
        }

    }

}