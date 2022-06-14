#include <iostream>
#include <vector>
using namespace std;
void triangulares(vector<int>numeros){
    if(numeros[0] < (numeros[1] + numeros[2]) && numeros[1] < (numeros[0] + numeros[2]) && numeros[2] < (numeros[0] + numeros[1])){
        cout<<"Los numeros son triangulares"<<endl;
    }
    else{
        cout<<"NO son traingulares"<<endl;
    }
}
int main(){
    vector<int>numeros;
    int num;
    for(int i = 0; i < 3; i++){
    cout<<"Escriba un numero que quiera ingresar en el vector"<<endl;
    cin>>num;
    numeros.push_back(num);
    }
    triangulares(numeros);
}
