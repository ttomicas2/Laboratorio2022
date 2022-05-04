#include <iostream>
using namespace std;
void menu(char signo, float num1, float num2, float resultado){
    bool loop = true;
    while(loop){
        cout<<"elija una opcion "<<endl<<"+. Suma -. Resta *. Multiplicación /. División a. Salir"<<endl;
        cin>>signo;
        switch (signo)
        {
        case '+':
            resultado = num1 + num2;
            cout<<resultado<<endl;
            break;
        case '-':
            resultado = num1 - num2;
            cout<<resultado<<endl;
            break;
        case '*':
            resultado = num1 * num2;
            cout<<resultado<<endl;
        break;
        case '/':
            resultado = num1 / num2;
            cout<<resultado<<endl;
            break;
        case 'a':
            loop = false;
            break;
        default:
            cout<<"Escriba una opcion valida"<<endl;
            break;
        }
    }
}

int main(){
    char signo;;
    float num1;
    float num2;
    float resultado;
    cout<<"Ingrese un numero"<<endl;
    cin>>num1;
    cout<<"ingrese otro numero"<<endl;
    cin>>num2;
    menu(signo, num1, num2, resultado);
}      