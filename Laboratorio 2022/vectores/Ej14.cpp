#include <iostream>
#include <vector>
using namespace std;
bool triangulares(vector<int>numeros, bool triangular){
    if(numeros[0] < (numeros[1] + numeros[2]) && numeros[1] < (numeros[0] + numeros[2]) && numeros[2] < (numeros[0] + numeros[1])){
        triangular = true;
    }
    else{
        triangular = false;
    }
    return triangular;
}
int main(){
    vector<int>numeros;
    int num;
    bool triangular;
    for(int i = 0; i < 3; i++){
    cout<<"Escriba un numero que quiera ingresar en el vector"<<endl;
    cin>>num;
    numeros.push_back(num);
    }
    triangular=triangulares(numeros, triangular);
    (triangular == true)? cout<<"Los numeros son triangulares"<<endl : cout<<"NO son traingulares"<<endl;
}
