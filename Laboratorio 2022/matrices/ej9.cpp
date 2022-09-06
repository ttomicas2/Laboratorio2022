#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>>llenar (){
    int num;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    vector<int>v4;
    for(int i = 1; i < 5 ; i++){
        for(int e = 0; e < 4; e++){
            cout<<"ingrese numeros en la matriz"<<endl;
            cin>>num;
            if(i == 1){
            v1.push_back(num);
            }
            else if(i == 2){
            v2.push_back(num);
            }
            else if(i == 3){
            v3.push_back(num);
            }
            else{
            v4.push_back(num);
            }
        }
    }
    vector<vector<int>> matriz;
    matriz.push_back(v1);
    matriz.push_back(v2);
    matriz.push_back(v3);
    matriz.push_back(v4);
    return matriz;
}

vector<int>llenarVector (){
    int num;
    vector<int>v1;
    for(int i = 1; i < 5; i++){
        cout<<"ingrese numeros en el vector"<<endl;
        cin>>num;
        v1.push_back(num);
    }
    return v1;
}
void elementosComun(vector<vector<int>>matriz, vector<int>vector){
    int acertadas = 0;
    bool iguales = false;
    for(int i= 0; i < 4; i++){
        acertadas = 0;
        for(int e = 0; e < 4; e++){
            if(matriz[i][e] == vector[e]){
                acertadas++;
            }
        }
        if(acertadas == 4){
            cout<<"La fila "<<i+1<<" es igual al vector"<<endl;
            iguales = true;
        }
    }
    if(!iguales){
        cout<<"No hay una columna igual al vector"<<endl;
    }
}

int main(){
    cout<<"Llene matriz"<<endl;
    vector<vector<int>>matriz=llenar();
    cout<<"Llene vector"<<endl;
    vector<int>vector=llenarVector();
    elementosComun(matriz, vector);
}