#include <iostream>
using namespace std;
int main(){
    float numero1;
    float numero2;
    float suma;
    float divi;
    float resta;
    float multi;

    cout<<"ingrese un numero"<<endl;
    cin>>numero1;
    cout<<"ingrese otro numero"<<endl;
    cin>>numero2;

      cout<<"los resultados son"<<endl;

    if ( numero2 != 0)
    {
        divi = numero1 / numero2;
        cout<<"division"<<endl;
        cout<<divi<<endl;
    }
    else
    {
        cout<<"no se puede dividir por 0"<<endl;

    }

    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multi = numero1 * numero2;
    cout<<"suma"<<endl;
    cout<<suma<<endl;
    cout<<"resta"<<endl;
    cout<<resta<<endl;
    cout<<"multiplicacion"<<endl;
    cout<<multi<<endl;
    
    



}