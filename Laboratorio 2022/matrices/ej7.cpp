#include <iostream>
#include <vector>
using namespace std;

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

void elementosComun(vector<vector<int>>matriz1, vector<vector<int>>matriz2){
    for(int i= 0; i < 3; i++){
        for(int e = 0; e < 3; e++){
            for(int f = 0; f<3; f++){
                for(int c = 0; c<3 ; c++){
                    if(matriz1[i][e] == matriz2[f][c]){
                        cout<<"Elemento en comun: "<<matriz1[i][e]<<endl;
                    }
                }
            }
        }
    }
}

int main(){
    cout<<"Llene matriz a"<<endl;
    vector<vector<int>>matriz1=llenar();
    cout<<"Llene matriz b"<<endl;
    vector<vector<int>>matriz2=llenar();
    elementosComun(matriz1, matriz2);
}