#include <iostream>
#include <vector>
using namespace std;

struct Posicion{
    int fila;
    int columna;
};

vector<vector<int>>mostrar(vector<vector<int>>matriz){
    for(int i= 0; i < 3; i++){
        for(int e = 0; e < 3; e++){
            cout<<matriz[i][e]<<" ";
        }
        cout<<endl;
    }
}

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

void intercambio(vector<vector<int>>matriz1, vector<vector<int>>matriz2){
    int num_grande = 0;
    int num_chico = 2147483640;
    Posicion pgrande;
    Posicion pchico;
    for(int i = 0; i < 3; i++){
        for(int e = 0; e < 3; e++){
            if(num_chico > matriz1[i][e]){
                num_chico = matriz1[i][e];
                pchico.columna=e;
                pchico.fila=i;
            }
        }    
    }
    for(int i = 0; i < 3; i++){
        for(int e = 0; e < 3; e++){
            if(num_grande < matriz2[i][e]){
                num_grande = matriz2[i][e];
                pgrande.columna=e;
                pgrande.fila=i;
            }
        }    
    }
    cout<<"numchico"<<num_chico<<endl;
    cout<<"numgrande"<<num_grande<<endl;
    matriz2[pgrande.fila][pgrande.columna]=num_chico;
    matriz1[pchico.fila][pchico.columna]=num_grande;
    cout<<"Matriz a:"<<endl;
    mostrar(matriz1);
    cout<<"Matriz b:"<<endl;
    mostrar(matriz2);
}

int main(){
    cout<<"llene el vector a"<<endl;
    vector<vector<int>>matriz1=llenar();
    cout<<"llene el vector b"<<endl;
    vector<vector<int>>matriz2=llenar();
    intercambio(matriz1, matriz2);
}