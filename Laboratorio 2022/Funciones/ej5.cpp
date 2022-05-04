#include <iostream>
using namespace std;
void menu(int num, float num1, float num2, float resultado){
    bool loop = true;
    cout<<"Ingrese un numero"<<endl;
    cin>>num1;
    cout<<"ingrese otro numero"<<endl;
    cin>>num2;
    while(loop){
        cout<<"elija una opcion "<<endl<<"1. Suma 2. Resta 3. Multiplicación 4. División 5. Salir"<<endl;
        cin>>num;
        switch (num)
        {
        case 1:{
            resultado = num1 + num2;
            cout<<resultado<<endl;
            break;
        }
        case 2:
            resultado = num1 - num2;
            cout<<resultado<<endl;
            break;
        case 3:
            resultado = num1 * num2;
            cout<<resultado<<endl;
        break;
        case 4:
            resultado = num1 / num2;
            cout<<resultado<<endl;
            break;
        case 5:
            loop = false;
            break;
  
        default:
            cout<<"Escriba una opcion valida"<<endl;
            break;
        }
    }
}

int main(){
    int num;
    float num1;
    float num2;
    float resultado;
    menu(num, num1, num2, resultado);
}    