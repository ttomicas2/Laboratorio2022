#include <iostream>
using namespace std;
int main(){
    int n;
    int n2;
    int par1 = 0;
    int par2 = 0;
    int cont_par = 0;
    int impar1 = 0;
    int impar2 = 0;
    int cont_impar = 0;
    int contador = 0;
    cout<<"Escriba una cantidad de numeros"<<endl;
    cin>>n;
    if(n < 0){
        n = n * (-1);
    }
    while(contador < n){
        cout<<"escriba un numero"<<endl;
        cin>>n2;
        contador++;
        if(n2%2 == 0){
            cont_par++;
            if (par1 != 0){
                par2 = n2;
                if (par1 < par2){
                    par1 = par2;
                }
            }
            else{
                par1 = n2;
            }
        }
        else{
            if (impar1 != 0){
                cont_impar++;
                impar2 = n2;
                if (impar1 < impar2){
                    impar1 = impar2;
                }
            }
            else{
                impar1 = n2;
            }
        }
    }
    (cont_par == 0) ? cout<<"No se ingresaron numeros pares"<<endl : cout<<"El par mas grande es: "<<par1<<endl;
    (cont_impar == 0) ? cout<<"No se escribieron numeros impares"<<endl : cout<<"El impar mas grande es: "<<impar1<<endl;
}
