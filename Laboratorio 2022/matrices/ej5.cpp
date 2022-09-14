#include <iostream>
#include <vector>
using namespace std;

struct Posicion{
    int fila;
    int columna;
};

void mostrar(vector<vector<int>>matriz){
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
    int num_grande1 = 0;
    int num_chico1 = 2147483640;
    int num_grande2 = 0;
    int num_chico2 = 2147483640;
    Posicion pgrande1;
    Posicion pchico1;
    Posicion pgrande2;
    Posicion pchico2;
    for(int i = 0; i < 3; i++){
        for(int e = 0; e < 3; e++){
            if(num_chico1 > matriz1[i][e]){
                num_chico1 = matriz1[i][e];
                pchico1.columna=e;
                pchico1.fila=i;
            }
            if(num_grande1 < matriz1[i][e]){
                num_grande1 = matriz1[i][e];
                pgrande1.columna=e;
                pgrande1.fila=i;
            }
        }    
    }
    for(int i = 0; i < 3; i++){
        for(int e = 0; e < 3; e++){
            if(num_chico2 > matriz2[i][e]){
                num_chico2 = matriz2[i][e];
                pchico2.columna=e;
                pchico2.fila=i;
            }
            if(num_grande2 < matriz2[i][e]){
                num_grande2 = matriz2[i][e];
                pgrande2.columna=e;
                pgrande2.fila=i;
            }
        }    
    }
    cout<<"numchico de A: "<<num_chico1<<endl;
    cout<<"numgrande de A: "<<num_grande1<<endl;
    cout<<"numchico de B: "<<num_chico2<<endl;
    cout<<"numgrande de B: "<<num_grande2<<endl;
    matriz2[pchico2.fila][pchico2.columna]=num_grande1;
    matriz2[pgrande2.fila][pgrande2.columna]=num_chico1;
    matriz1[pchico1.fila][pchico1.columna]=num_grande2;
    matriz1[pgrande1.fila][pgrande1.columna]=num_chico2;
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