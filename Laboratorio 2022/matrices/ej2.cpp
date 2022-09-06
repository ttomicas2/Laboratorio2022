#include <iostream>
#include <vector>
using namespace std;

struct Posicion
{
    int fila;
    int columna;
};


vector<vector<int>>llenar (){
    int num;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    for(int i = 1; i < 4 ; i++){
        for(int e = 0; e < 3; e++){
            cout<<"ingrese numeros en la matriz"<<endl;
            cin>>num;
            if(i == 1){
            v1.push_back(num);
            }
            else if(i == 2){
            v2.push_back(num);
            }
            else{
            v3.push_back(num);
            }
        }
    }
    vector<vector<int>> matriz;
    matriz.push_back(v1);
    matriz.push_back(v2);
    matriz.push_back(v3);
    return matriz;
}

void elementos(vector<vector<int>>matriz){
    int num_chico = 2147483640;
    Posicion pchico;
    int num_grande = 0;
    Posicion pgrande;
    for(int i= 0; i < 3; i++){
        for(int e = 0; e < 3; e++){
            if(matriz[i][e] > num_grande){
                num_grande = matriz[i][e];
                pgrande.columna=e+1;
                pgrande.fila=i+1;
            }
            if(matriz[i][e] < num_chico){
                num_chico= matriz[i][e];
                pchico.columna=e+1;
                pchico.fila=i+1;
            }
        }
    }
    cout<<"El numero mas grande es: "<<num_grande<<" y su posicion es: fila:"<<pgrande.fila<<" columna:"<<pgrande.columna<<endl;
    cout<<"El numero mas grande es: "<<num_chico<<" y su posicion es: fila:"<<pchico.fila<<" columna:"<<pchico.columna<<endl;
}

int main(){
    vector<vector<int>>matriz=llenar();
    elementos(matriz);
}